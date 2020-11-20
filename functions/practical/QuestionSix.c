#include <stdio.h>

//function prototypes
void naturalNumber(int num, int userInput);

void naturalNumber(int num, int userInput){
   
    if(num <= userInput){
        printf("%d ", num);
        num++;

        //calling function itself
        naturalNumber(num, userInput);
    }
}

int main(){

    int unserInput;
    int num = 1;

    printf("Please Enter a number: ");
    scanf("%d", &unserInput);

    naturalNumber(num, unserInput);
    printf("\n");
    return 0;
}