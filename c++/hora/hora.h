#ifndef HORA_H
#define HORA_H

class Hora{
	
	public:
	Hora(); // constructor
	void estableceHora( int, int, int ); // establece hora, minuto, segundo
 	void imprimeMilitar();// imprime la hora en formato militar
	void imprimeEstandar();// imprime la hora en formato estánda
	
	private:
	int hora;
	int minuto;
	int segundo;

};


#endif 
