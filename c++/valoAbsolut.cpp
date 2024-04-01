#include <iostream>

using namespace std;

template <class TIPO>

void valorAbs(TIPO num){
	
	if(num<0) num *= -1;
	
	cout << "El valor absoluto es " << num << endl; 
}

int main(void){

	int num1 = -3;
	float num2 = 5.5;
	double num3 = -68.7;
	
	valorAbs(num1);
	valorAbs(num2);
	valorAbs(num3);

	return 0;
}
