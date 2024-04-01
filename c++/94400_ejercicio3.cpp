#include <iostream>
#include <math.h>

using std::cout;
using std::endl;
template<class TIPO>

TIPO espacio3d(TIPO x1, TIPO y1, TIPO z1, TIPO x2, TIPO y2, TIPO z2){
	
	TIPO distanciaEucl;
	distanciaEucl = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1)); 
	return distanciaEucl;
	
}
int main(void){
	
	int d1 = espacio3d(2,2,2,1,1,1);
	double d2 = espacio3d(2.5,2.5,2.5,1.5,1.5,1.5);
	
	cout << "La distancia 3d en int es " << d1 << " y en double " << d2  << endl;

	return 0;
	
}
