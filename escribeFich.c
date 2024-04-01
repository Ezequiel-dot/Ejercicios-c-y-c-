#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>


int main(void){
	
	int fichero = open("miFichero",O_CREAT | O_WRONLY, 777);
	char *cadena= "Hola Mundo";
	
	
	if(fichero == -1) return 1;
	
	write(fichero, cadena, strlen(cadena));
	 
	close(fichero);
	
	return 0;
}
