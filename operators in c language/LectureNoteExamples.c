#include <stdio.h>

//Function prototype
void exampleOne();
void examplTwo();

void main(){

    exampleOne();
    
}

void exampleOne(){

    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;
    result = a - b;
    printf ("a - b = %i\n", result);
    result = b * c;
    printf ("b * c = %i\n", result);
    result = a / c;
    printf ("a / c = %i\n", result);
    result = a + b * c;
    printf ("a + b * c = %i\n", result);
    printf ("a * b + c * d = %i\n", a * b + c * d);

}

void examplTwo(){

    int a = 25;
    int b = 2;
    float c = 25.0;
    float d = 2.0;
    printf ("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
    printf ("a / b * b = %i\n", a / b * b);
    printf ("c / d * d = %f\n", c / d * d);
    printf ("-a = %i\n", -a);


}