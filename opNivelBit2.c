#include <stdio.h>

void operacionAnd();
void operacionOr();
void operacionXor();

int main(){
	
	operacionAnd();
	operacionOr();
	operacionXor();

	return 0;
}


void operacionAnd(){
	
	int res, num1, num2;
	printf("Ingrese dos numeros enteros \n");
	
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	res= num1 & num2;
	
	printf("%d & %d = %d \n", num1, num2, res);
	

}

void operacionOr(){
	
	int res, num1, num2;
	printf("Ingrese dos numeros enteros \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	res= num1 | num2;
	printf("%d | %d = %d \n", num1, num2, res);

}

void operacionXor(){
	
	int res, num1, num2;
	printf("Ingrese dos numeros enteros \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	res= num1 ^ num2;
	
	printf("%d ^ %d = %d \n", num1, num2, res);
	

}
