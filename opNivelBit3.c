#include <stdio.h>

void mostarLsb(unsigned int, unsigned int);

int main(){
		
	mostarLsb(8,4);
	//printf("hola");

	return 0;
}

void mostarLsb(unsigned int val, unsigned int nbits){
	
	unsigned int mask1 = 1, mask2 = 1 << (nbits-1), lsb, msb;
	
//	lsb = val & mask1; //1001 and 0001 
	//msb = val & mask2; //1001 and 1000
	
	if(val & mask1){
		lsb=1;
	}else{
		lsb=0;
	}
	
	
	if(val & mask2){
		msb=1;
	}else{
		msb=0;
	}
	
	printf(" El lsb es %d, y el msb es %d \n", lsb, msb);
	
}
