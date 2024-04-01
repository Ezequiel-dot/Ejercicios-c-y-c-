#include <stdio.h>

union dato {
	float datoABytes;
	unsigned char arreglo[4];
};

float pasajeCharFloat(unsigned char []);
unsigned char pasajeFloatChar(float , int );

int main(){
	
	
	return 0;
}


float pasajeCharFloat(unsigned char arr[]){
	
	union dato dato1;
	float flotante;
	
	dato1.arreglo[0]= arr[0];
	dato1.arreglo[1]= arr[1];
	dato1.arreglo[2]= arr[2];
	dato1.arreglo[3]= arr[3];
	
	flotante = dato1.datoABytes;
		
	return flotante;
}

unsigned char pasajeFloatChar(float flotante, int posicion){
	
	union dato dato1;
	unsigned char pasaje;
	
	dato1.arreglo[posicion]= flotante;
	
	pasaje = dato1.arreglo[posicion];
		
	return pasaje;
}


