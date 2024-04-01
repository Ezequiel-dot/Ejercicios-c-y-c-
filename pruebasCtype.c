#include <stdio.h>
#include <ctype.h>
int main(void)
{
	printf("%s\n%s%s\n%s%s\n\n", "Segun isdigit: ",
	isdigit('8')? "8 es un " : "8 no es un ", "digito",
	isdigit('#')? "# es un " : "# no es un ", "digito");
	
	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "Segun isxdigit:",
	isxdigit('F')? "F es un " : "F no es un ", "digito hexadecimal",
	isxdigit('J')? "J es un " : "J no es un ", "digito hexadecimal",
	isxdigit('7')? "7 es un " : "7 no es un ", "digito hexadecimal",
	isxdigit('$')? "$ es un " : "$ no es un ", "digito hexadecimal",
	isxdigit('f')? "f es un " : "f no es un ", "digito hexadecimal");
	
	return 0;
}
