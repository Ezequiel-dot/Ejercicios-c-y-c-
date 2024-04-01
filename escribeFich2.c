#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>


int main(void){
	
	char cadenaLeer[30];
	char *cadenaEscribir = "aguante messi papa";
	int fichero = open("cancionZafar", O_RDWR);
	
	if(fichero == -1) return 1;
	
	lseek(fichero, 5, SEEK_SET);
	
	int leidos = read(fichero, cadenaLeer, strlen(cadenaLeer));
	
	write(fichero, cadenaEscribir, strlen(cadenaEscribir));
	
	printf("se leyo %d bites= %s",leidos , cadenaLeer);
	
	close(fichero);
	
	return 0;
}
