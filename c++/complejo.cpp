#include <iostream>

using std::cout;
using std::endl;

class Complejo {
    friend Complejo operator+(double r, Complejo );

    public:
        Complejo(double r= 0.0, double i= 0.0);
        double getReal() const { return real; }
         double getImag() const { return imag; }
         //void setReal(double r);
         //void setReal(double i);
         void imprimir() const;

         // Operaciones
         //Complejo sumar(Complejo & );
         //Complejo restar(Complejo & );
         Complejo operator+(Complejo & );
         Complejo operator+(double );

    private:
        double real, imag;
};

Complejo::Complejo(double r, double i)
{
    real = r;
    imag = i;
}

void Complejo::imprimir()  const
{
    cout << real << " +j (" << imag << ")";
}

//Complejo Complejo::sumar(Complejo &op2)
Complejo Complejo::operator+(Complejo &op2)
{
    double r = real + op2.real;
    double i = imag + op2.imag;
    Complejo resultado(r, i);
    return resultado;
}

Complejo Complejo::operator+(double r)
{
    Complejo resultado(real+r, imag);
    return resultado;
}

Complejo operator+(double r, Complejo op2)
{
    Complejo resultado(r+op2.real, op2.imag);
    return resultado;
}

int main()
{
    Complejo c1(2, 3), c2(2.3, -1.5);

    cout << "c1 = ";
    c1.imprimir();
    cout << endl;

    cout << "c2 = ";
    c2.imprimir();
    cout << endl;

    Complejo c3 = c1 + c2;
    //cout << "c3 = " << c3 << endl;
    cout << "c3 = ";
    c3.imprimir();
    cout << endl;

    Complejo c4 = c1 + 1.1;
    cout << "c4 = ";
    c4.imprimir();
    cout << endl;

    Complejo c5 = 1.1 + c1;
    cout << "c5 = ";
    c5.imprimir();
    cout << endl;

    return 0;
}
