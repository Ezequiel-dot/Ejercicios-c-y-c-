#include <iostream>

using std::cout;
using std::endl;


int cuadradoPorValor( int );
void cuadradoPorReferencia( int & );


int main()
{
	
	int x = 2, z = 4;
	
	cout <<"x = " << x << " antes de cuadradoPorValor\n"
	     <<"Valor devuelto por cuadradoPorValor: " <<cuadradoPorValor( x ) << endl
	     <<"x = " << x << " despues de cuadradoPorValor\n" << endl;
	     
	cout <<"z = " << z << " antes de cuadradoPorReferencia\n";
	     cuadradoPorReferencia( z );
	cout <<"z = " << z << " despues de cuadradoPorReferencia\n" << endl;
	     

	return 0;

} // fin de la función main
	
	int cuadradoPorValor( int a ){
	return a *= a;  // argumento de la llamada no modificada
	} // fin de la función cuadradoPorValor
	
	void cuadradoPorReferencia( int &cRef )
	{
		cRef *= cRef;// argumento de la llamada modificada
	} // fin de la función cuadradoPorReferencia
