#include <stdio.h>

#define maskara 0x44

int main(){
	
	unsigned char dato;
	unsigned char maskBit3 = 1 << 3;  //0000 1000
	unsigned char maskBit4 = 1 << 4;  //0001 0000
	
	//dato=1;
	
	//actividad a
	if((dato & maskBit3) && !(dato & maskBit4)) 
	{
		dato <<= 2;
		dato ^= maskara;
	}
	
	//actividad b
	if(!(dato & maskBit3) && (dato & maskBit4)) 
	{
		dato >>= 3;
		dato ^= maskara;
	}
	
	//actividad c
	if((dato & maskBit3) && (dato & maskBit4))
		dato &= maskara;  
	
	
	//actividad d
	if(!(dato & maskBit3) && !(dato & maskBit4)) 
		dato |= maskara;
	
	
	return 0;
	
}
