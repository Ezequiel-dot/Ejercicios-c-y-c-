#include<iostream>

using std::cout;
using std::cin;
using std::endl;

inline double cubo (const double lado) {return lado * lado * lado ;}

int main(void){

	double lado; 
	
	for(int i = 1; i < 4; i++){
	
	cout << "ingrese el lado del cubo ";
	cin >> lado;
	cout << "El volumen del cubo con lado = " << lado << " es "<< cubo(lado);
	} 


	return 0;
}
