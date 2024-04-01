#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define maskNormal 0x01 //0000 0001
#define maskTemp 0x08   //0000 1000
#define maskHum 0x10    //0001 0000
#define maskGases 0x20  //0010 0000

struct tinglado {
	int id;
	float temperatura;
	float humedad;
	float gases;
};

union datoAfloat {
	float datoFloat;
	unsigned char datoBytes[4];//4 para la conversion

};


int main(int argc, char* argv [])
{	
	unsigned char registro;
	unsigned char buffer[7];
	
	struct tinglado tin;
	union datoAfloat convertir;
	
	int trama=open("\dev\ttyUSB0", R_ONLY);//no tiene ponerle permisos 0777 porque no se le puede poner permisos
	
	if(trama==-1)
	{
		return 1;
	}
	
	if(read(trama, buffer, sizeof(buffer)) == -1)// en buffer cargo los 7 bytes 
	{
		printf("\nError de lectura.\n");
		return 2;
	}
	
	tin.id=buffer[4];
	registro=buffer[5];
	
	if(buffer[6]==OXFE)
	{
		//guardo dato 1234 en union
		convertir.datoBytes[3]=buffer[3];
		convertir.datoBytes[2]=buffer[2];
		convertir.datoBytes[1]=buffer[1];
		convertir.datoBytes[0]=buffer[0];
		convertir.datoFloat=registro;
		
		//ahora tengo que ver de que tipo de dato es. Temperatura, gas, etc. En registro es donde cargué
		
		if(registro & maskNormal)// el bit0 de registro indica actividad
		{
			if(registro & maskTemp)
				tin.temperatura=convertir.datoFloat;

			if(registro & maskHum)
				tin.humedad=convertir.datoFloat;

			if(registro & maskGases)
				tin.gases=convertir.datoFloat;
		}else{
			printf("\nInactividad. No se consideran los datos.\n");
			return 3;
		}
	}else
		printf("\nInicio no detectado.\n");	
	
	close(trama);
	
	return 0;
}

if(putchar(registro & maskTemp ? '1':'0'))//putchar no devuelve un 1 o 0 logico en el if.
























d
