#include <stdio.h>

//perimeter of a rectangle
void main(){

    int height;
    int width;
    int perimeter;

    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);
    
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    perimeter = height * 2 + width * 2;

    printf("perimeter of the rectangle is %d\n", perimeter);
}