#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(){
	
	int pttyS1, fichero;
	char cadena[21];
	
	pttyS1 = open("/tmp/ttyS1",O_RDONLY);
	
	if(pttyS1 < 0)
		exit(1);

	fichero=open("FicheroTty", O_CREAT|O_WRONLY, 0777);

	if(fichero == -1)
		exit(2);
	
	read(pttyS1, cadena, 20); // lee 20 bytes
	
	write(fichero, cadena , 20);
	
	return 0;
	
}
