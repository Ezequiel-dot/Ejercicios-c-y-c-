
#include <stdio.h>
int main(){
	
				//010
	float UCSR0B &= ~(1 << 1); //UCSZ00 APAGADO
	UCSR0B |=  (1 << 2);//UCSZ01 PRENDIDO
    	float UCSR0C &= ~(1 << 2);//UCSZ02 APAGADO
    	
	return 0;
	
}
