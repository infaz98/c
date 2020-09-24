#include <stdio.h>

//Function prototype
void exampleOne();

int main(void){
	exampleOne();
}

void exampleOne(){

	int integerVar = 100;
	float floatingVar = 331.79;
	double doubleVar = 8.44e+11;
	char charVar = 'W';
	_Bool boolVar = 0;
	printf ("integerVar = %i\n", integerVar);
	printf ("floatingVar = %f\n", floatingVar);
	printf ("doubleVar = %e\n", doubleVar);
	printf ("doubleVar = %f\n", doubleVar);
	printf ("charVar = %c\n", charVar);
	printf ("boolVar = %i\n", boolVar);

}

