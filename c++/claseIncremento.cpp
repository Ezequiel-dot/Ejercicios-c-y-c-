#include<iostream>

using namespace :: std;


class incremento{
	public:
	incremento(int c = 0, int i = 1);
	void imprimir()const{cout << "El incremento es " << cuenta << endl;}
	void sumar();
	
	private:
	int cuenta;
	const int inc;
};

incremento::incremento(int c, int i):inc(i){
	
	cuenta = c;
	

}
/*
void incremento::imprimir(){
	
	cout << "El incremento es " << cuenta << endl;
}*/

void incremento::sumar(){
	
	cuenta += inc;
}

int main(void){

	incremento inc1(1, 1); 
	inc1.sumar();
	inc1.imprimir();

	return 0;
}
