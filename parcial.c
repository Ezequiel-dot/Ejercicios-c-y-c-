#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

struct tinglado{
	int id;
	float temperatura;
	float humedad;
	float gases;
};

union datoAfloat {
	float datoABytes;
	unsigned char datoBytes[4];//4 para la conversion
};

int main(void){
	
	char lecturaFichero[7];
	int fichero = open("/dev/ttyUSB0", O_RDONLY );
	unsigned char mask = 1; // 0000 0001
	unsigned char registro;
	struct tinglado tin;
	union datoAfloat convertir;
	
	if(fichero == -1) return 1;
	
	if(read(fichero, lecturaFichero, sizeof(lecturaFichero)) == -1) return 2;
	
	tin.id = lecturaFichero[4];
	registro = lecturaFichero[5];
	
	if(lecturaFichero[6] == 0XFE){
		
		if(mask & registro){
			
			mask<<3;// 0000 1000
			if(mask & registro) registro = tin.temperatura;
			
			mask<<1;// 0001 0000
			if(mask & registro) registro = tin.humedad;
			
			mask<<1;//0010 0000
			if(mask & registro) registro = tin.gases;
		}else{
			printf("inactividad\n");
		}
		
		convertir.datoBytes[0] = lecturaFichero[0];
		convertir.datoBytes[1] = lecturaFichero[1];
		convertir.datoBytes[2] = lecturaFichero[2];
		convertir.datoBytes[3] = lecturaFichero[3];
	}
	
	close(fichero);
	
	return 0;
}
