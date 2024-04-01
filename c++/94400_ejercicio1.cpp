#include <iostream>
#include <math.h>
using std::cout;
using std::endl;

int espacio2d(int x1, int y1, int x2, int y2){
	
	int distanciaEucl;
	
	distanciaEucl = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); 
	
	return distanciaEucl;
}
float espacio2d(float x1, float y1, float x2, float y2){
	
	float distanciaEucl;
	
	distanciaEucl = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); 
	
	return distanciaEucl;
}
int espacio3d(int x1, int y1, int z1, int x2, int y2, int z2){
	
	int distanciaEucl;
	distanciaEucl = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1)); 
	return distanciaEucl;
	
}
float espacio3d(float x1, float y1, float z1, float x2, float y2, float z2){
	
	int distanciaEucl;
	distanciaEucl = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1)); 
	return distanciaEucl;
	
}

int main(void){
	
	int d1 = espacio2d(2,2,1,1);
	float d2 = espacio2d(2,2,1,1);
	
	cout << "La distancia 2d en int es " << d1 << " y en float " << d2  << endl;
	
	int d3 = espacio3d(2,2,2,1,1,1);
	float d4 = espacio3d(2,2,2,1,1,1);
	
	cout << "La distancia 3d en int es " << d3 << " y en float " << d4  << endl;

	return 0;
	
}
