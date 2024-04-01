#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	
	char *cadena= "Hola mundo";
	int fichero = open("mifichero.txt", O_CREAT|O_WRONLY, 644);
	
	write(fichero, cadena, sizeof(char));
	
	return 0;
	
}
