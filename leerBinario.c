#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#define archivo "007 0_190517095325.bin"
//#define archivo2 "61992 190507181148.bin"
#define tiempos "tabTpo.txt"

union convertir
{
	uint16_t palabra16;
	uint32_t palabra32;
	float ieee754;
	short int bits16aint;
};

void distribuirTarea(float tiempo, uint8_t id, uint32_t aux4B);
void tiempoUnix(uint32_t aux4B);

int main()
{
	union convertir conversion;
	uint8_t unbyte, registro=0x00, id=0;
	uint8_t tus1, tus2, ts1, ts2;
	uint8_t byteA, byteB, byteC, byteD;
	uint16_t tus, ts;
	uint32_t aux4B;
	double tiempo;
	int contador = 0;
	
	FILE *ptrBin, *tblTiempos;
	
	if((ptrBin=fopen(archivo, "rb")) == NULL)
		printf("No se pudo abrir el archivo binario \n");
	
	if((tblTiempos=fopen(tiempos, "w"))==NULL)
		printf("No se pudo abrir el archivo para escritura \n");
		
	while(!feof(ptrBin)){
		
		fread(&unbyte,1,1,ptrBin);
		
		if(contador>=16){
			contador=0;
			ts1=ts2=tus1=tus2=0;
			registro=0x00;
		}
		
		if(unbyte==0xfe && contador==0)//posible inicio si se cumple
			registro=0x01;
			
		if(unbyte == 0x08 && registro == 0x01)//confirmado estoy en el inicio
			registro = 0x02 | registro;//0000 0010 or 0000 0001 = 0000 0011
			
		if(registro== 0x03){
			if(contador == 5)
				id = unbyte;
			else if(contador == 6)
				tus1 = unbyte;
			else if(contador == 7)
			{
				tus2 = unbyte;
				tus = (tus2 << 8)+tus1;
				conversion.palabra16 = tus;
				printf("El timepo en microsegundos es = %d \n",conversion.bits16aint);
			}
			else if(contador == 8)
				ts1=unbyte;
			else if(contador == 9)
			{
				ts2=unbyte;
				ts=(ts2<<8)+ts1;
				printf("El timepo en segundos es = %d \n",conversion.bits16aint);
			}
			else if(contador == 10)
				byteA = unbyte;
			else if(contador == 11)
				byteB = unbyte;
			else if(contador == 12)
				byteC = unbyte;
			else if(contador == 13)
			{
				byteD = unbyte;
				aux4B = (byteD<<24)+(byteC<<16)+(byteB<<8)+byteA;
				distribuirTarea(tiempo, id, aux4B);
			}
		}
		contador++;
	}
	
	fclose(ptrBin);
	fclose(tblTiempos);
	
	return 0;
	
}

void distribuirTarea(float tiempo, uint8_t id, uint32_t aux4B)
{
	float latitud = 0.0, longitud= 0.0;
	union convertir conversion;
	conversion.palabra32 = aux4B;
	printf("El valor de id es %d \n",id);
	
	switch(id)
	{
		case 0x14:
			latitud=conversion.ieee754;
			printf("Latitud: %f\n", latitud);
			break;
		case 21:
			longitud=conversion.ieee754;
			pri#000000ntf("Longitud: %f\n", longitud);
			break;
		case 0x16:
		
		case 0x17:
			tiempoUnix(aux4B);
		default:
			printf("Id no contemplado\n");
	}
}

void tiempoUnix(uint32_t aux4B)
{


}
