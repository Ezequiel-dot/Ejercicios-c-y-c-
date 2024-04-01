#include <iostream>
#include <math.h>
using std::cout;
using std::endl;

#define DISTANCIA_EUC(X1,Y1,X2,Y2) (sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1))))

int main(void){


	cout << "La distancia en 2d es "<< DISTANCIA_EUC(1,1,2,2)<< endl;
	
	return 0;
	
}
