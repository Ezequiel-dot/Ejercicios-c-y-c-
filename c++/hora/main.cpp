#include"hora.h"
#include<iostream>
using namespace std;

int main (){

	Hora h;
	 
	cout << "La hora militar inicial es ";
        h.imprimeMilitar();
        cout <<"\n La hora estandar inicial es ";
        h.imprimeEstandar();
        h.estableceHora( 22, 45, 59);
        cout << "\nLa hora militar reestablecida es ";
        h.imprimeMilitar();
        cout <<"\n La hora estandar reestablecida es ";
        h.imprimeEstandar();

	return 0;
}
