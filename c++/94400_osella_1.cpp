#include <iostream>
#include <cmath>
using namespace std;


void rot(int real, int im){

	float modulo = sqrt((real*real)+(im*im));
	float phi =  atan(im/real);
	float matriz[4];
	
	cout <<"el angulo es "<< phi <<endl;
	cout <<"el modulo es "<< modulo <<endl;
	
	matriz[0] = modulo*cos(phi);
	matriz[1] = (-1)*modulo*sin(phi);
	matriz[2] = modulo*sin(phi);
	matriz[3] = modulo*cos(phi);
	
	cout << matriz[0] << "   " << matriz[1] << endl;
	cout << matriz[2] << "   " << matriz[3] << endl;
		
}
void rot(float real, float im){

	float modulo = sqrt((real*real)+(im*im));
	float phi =  tan(im/real);
	float matriz[4];
	
	cout <<"el angulo es "<< phi <<endl;
	cout <<"el modulo es "<< modulo <<endl;
	
	matriz[0] = modulo*cos(phi);
	matriz[1] = (-1)*modulo*sin(phi);
	matriz[2] = modulo*sin(phi);
	matriz[3] = modulo*cos(phi);
	
	cout << matriz[0] << "   " << matriz[1] << endl;
	cout << matriz[2] << "   " << matriz[3] << endl;
		
}


int main(){

	rot(2,2);
	return 0;
}

