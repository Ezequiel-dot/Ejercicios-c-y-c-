#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char *cadena= "51.2%% de fiaca a la siesta";
	char *cadenaptr=NULL;
	double d=strtod(cadena, &cadenaptr);
	printf("La cadena \"%s\" es convertida al \n", cadena);
	printf("Valor double %.2f y la cadena \"%s\"\n",d , cadenaptr);
	
	{
		const char *cadena = "-1234567abc";
		char *remainderPtr=NULL;
		long x =strtol(cadena, &remainderPtr, 0);
		printf("\n\n%s%s\n%s%ld\n%s\%s\"\n%s%ld","La cadena original es ", cadena
		,"El valor convertido x es ",x , "Los restos de la cadena original son ",
		 remainderPtr, "El valor convertido mas 567 es ", x+567);
	}
	{
		int x=0;
		double y=0.0;
		puts("\nIngrese un integer y un double");
		scanf("%d%lf", &x, &y);
		char s[80]={'\0'};
		sprintf(s, "Integer:%6d\ndouble: %7.2f", x ,y);
		printf("El formato de salida almacenado en el arreglo s es: %s\n", s);
		
	
	}
	
	{
		char s[]="1234 88.234";
		int x;
		double y;
		sscanf(s, "%d %lf", &x, &y);
		puts("\n Los valores almacenados en el arreglo del caracter s son: ");
		printf("\ninteger: %6d\t double: %5.6f\n", x, y);
	}
	return 0;
}
