#include <stdio.h>

void imprimirBinario(unsigned char, unsigned char);

int main(){
	
	
	imprimirBinario(129, 8*sizeof(char));
	//printf("hola");

	
	return 0;
}

void imprimirBinario(unsigned char val, unsigned char nbits){
	
	unsigned char b, mask = 1 << (nbits-1);
	
	for(b=1; b <= nbits; b++){
		
		if(val & mask){
			putchar('1');
		}else{
			putchar('0');
		}
		
		mask >>= 1;
	}
	
}
