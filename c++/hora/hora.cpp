#include"hora.h"
#include<iostream>

using namespace std;


Hora::Hora(){
	hora = minuto = segundo = 0;
}

void Hora::estableceHora( int h, int m, int s )
{	
	/*hora = ( h >= 0 && h < 24 ) ? h : 0;
	minuto = ( m >= 0 && m < 60 ) ? m : 0;
	segundo = ( s >= 0 && s < 60 ) ? s : 0;*/
	if( h >= 0 && h < 24 ) {
	hora=h;
	}else{
	hora =0;
	}
	if( m >= 0 && m < 60 ) {
	minuto=m;
	}else{
	minuto =0;
	}
	if( s >= 0 && s < 60 ) {
	segundo=s;
	}else{
	segundo =0;
	}
}

void Hora::imprimeMilitar()
{
	cout << ( hora < 10 ? "0" : "" ) << hora << ":"
	     << ( minuto < 10 ? "0" : "" ) << minuto;
} 

void Hora::imprimeEstandar()
{
	cout << ( ( hora == 0 || hora == 12) ? 12 : hora % 12 )
	     << ":" << ( minuto < 10 ? "0" : "" ) << minuto
	     << ":" << ( segundo < 10 ? "0" : "") << segundo
	     << ( hora < 12 ? " AM" : " PM");
}
