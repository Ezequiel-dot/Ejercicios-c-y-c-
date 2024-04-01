#include <iostream>

using namespace std;

class complejo{
	
	public:
	complejo(double re=0.0, double im=0.0);
	void imprimir()const{ cout << real << " + j("<< imaginaria << ")" << endl; }
	void sumar(complejo &cSumar);
	void getReal()const{ cout << real  << endl; }
	void getImaginaria()const{ cout <<"j("<< imaginaria << ")" << endl; }
	
	private:
	double real;
	double imaginaria;
};

complejo::complejo(double re, double im){
	
	real = re;
	imaginaria = im;

}


void complejo::sumar(complejo &cSumar){
	
	real += cSumar.real;
	imaginaria += cSumar.imaginaria;
}


int main(void){

	complejo c1(2,-3);
	complejo c2(2,3);
	c1.imprimir();
	c2.imprimir();
	
	c2.sumar(c1);
	c2.imprimir();
	c2.getReal();
	c2.getImaginaria();
	
	return 0;
}
