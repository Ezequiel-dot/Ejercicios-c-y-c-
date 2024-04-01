#include <iostream>
using namespace std;

class Fasores{

	friend Fasores operator+(float m, Fasores );
	friend Fasores operator-(float m, Fasores );
	friend Fasores operator*(float m, Fasores );
	friend Fasores operator/(float m, Fasores );
	public:
		Fasores(float modulo= 0, float phi= 0);
		~Fasores(); 
		//Getter
		int obtenerModulo(){return modulo;}
		int obtenerPhi(){return phi;}
		
		//Setter
		void estableceModulo(float);
		void establecePhi(float);
		
		void imprimir()const;

		

	private:
		float modulo;
		float phi;
};
Fasores::Fasores(float m, float p)
{
    modulo = m;
    phi = p;
}

void Fasores::estableceModulo(float mod){modulo=mod;}
void Fasores::establecePhi(float p){phi=p;}
void Fasores::imprimir()const{
    cout << modulo << " " << phi <<endl;
}


Fasores operator+(float m, Fasores op2)
{
    Fasores resultado(m+op2.modulo, op2.phi);
    return resultado;
}
Fasores operator-(float m, Fasores op2)
{
    Fasores resultado(m-op2.modulo, op2.phi);
    return resultado;
}
Fasores operator*(float m, Fasores op2)
{
    Fasores resultado(m*op2.modulo, op2.phi);
    return resultado;
}
Fasores operator/(float m, Fasores op2)
{
    Fasores resultado(m*op2.modulo, op2.phi);
    return resultado;
}

int main(){
return 0;
}
