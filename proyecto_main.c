#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "termset.h"

int abrirPuerto(void);

int main ( void ){
	
	int opcion=0;
	int fd = abrirPuerto(); 
	char nombre[20];
    	char contra[5];
    
    while(opcion != 4){
   	printf("\n1 - Ingresar usuario y contraseña \n");
   	printf("2 - Mostrar lista \n");
   	printf("3 - Borrar usuario \n");
   	printf("4 - Salir \n");
   	scanf("%d", &opcion);
   	
   
   	switch(opcion) {

   	case 1:		
		write(fd,"1", 1);
    		tcdrain( fd );
    	
    		printf("Ingrese su nombre: ");
    		scanf("%s", nombre);
    		printf("Ingrese su contraseña: ");
   		scanf("%s", contra);
    		printf("%s %s\n", nombre, contra);	
		write(fd, nombre, strlen(nombre));
		tcdrain( fd );
    		write(fd, "\n", 1); 
    		tcdrain( fd ); 
    		write(fd,contra , strlen(contra));
    		tcdrain( fd );
    		write(fd, "\n", 1);  
		tcdrain( fd );
		sleep (1);
		break;
	
	case 2:
		write(fd,"2", 1);
		tcdrain( fd );
		sleep (1);
		break;
	case 3:
		write(fd,"3", 1);
		tcdrain( fd ); 
		printf("Ingrese el nombre del usuario que desea eliminar: ");
		scanf("%s", nombre);
		write(fd, nombre, strlen(nombre));
		tcdrain( fd );
		write(fd, "\n", 1);
		tcdrain( fd );
		sleep (1);
		break;
   	}
   }
	close (fd);
	return 0;
}

int abrirPuerto(){
	int fd;
	struct termios oldtty , newtty ;

	fd = open ( "/dev/ttyACM0" , O_RDWR | O_NOCTTY | O_NDELAY );
	if ( fd == -1){
		printf ( " ERROR : no se pudo abrir el dispositivo .\n " );
		return -1;
	}
	if ( termset ( fd , 9600 , &oldtty , &newtty ) == -1){
		printf ( " ERROR: no se pudo configurar el TTY \n " );
		return -1;
	}
	tcflush ( fd , TCIOFLUSH );
	return fd;
	
}

