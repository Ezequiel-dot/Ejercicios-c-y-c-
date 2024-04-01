#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>

int main(void){
	
	char *cadena= "Recuperatorio\n";
	int fichero = open("/dev/ttyUSB0 ", O_WRONLY);
	
	if(fichero == -1)  exit(1);
	
	write(fichero, cadena, strlen(cadena));
	
	close(fichero);
	
	
	return 0;
}
