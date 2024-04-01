#include<iostream>

using namespace std;


class Cuenta{
	
	friend void estableceX(Cuenta &, int );
	
	public:
	Cuenta(int xdef = 0);
	void imprimir() const{ cout << x << endl; }
	
	private: 
	int x;
};

Cuenta::Cuenta(int xdef){

	x = xdef;

}
void estableceX(Cuenta &c, int val){

	c.x = val;
	
}

int main(void){

	Cuenta contador;
	contador.imprimir();
	estableceX(contador, 8);
	contador.imprimir();
	
	return 0;
}
