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

union convertir{
	
	unsigned char datoFloat;
	char conv[4];
	
};

int main(void){
	
	struct tinglado tin;
	union convertir conversion;
	int mask=1;
	unsigned char registro;
	char lectura[7];
	int fichero= open("/dev/ttyUSB0", O_RDONLY );
	
	if(read(fichero, lectura, sizeof(char)) == -1) return 1;
	
	registro= lectura[5];
	tin.id=lectura[4];
	
	if(lectura[6] == 0xFE){
		
		if(registro && mask){
			
			mask<<3;
			if(registro && mask) tin.temperatura;
			mask<<1;
			if(registro && mask) tin.humedad;
			mask<<1;
			if(registro && mask) tin.gases;
		}
		
		conversion.conv[0]= lectura[0];
		conversion.conv[1]= lectura[1];
		conversion.conv[2]= lectura[2];
		conversion.conv[3]= lectura[3];
		conversion.datoFloat = registro; 
	}
	
	close(fichero);

	return 0;
}
