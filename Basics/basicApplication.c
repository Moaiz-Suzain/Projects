#include <stdio.h>

int main() {

    // SQUARE
    float side;
    printf("Enter the value of side of the square:  ");
    scanf("%f", &side);
    printf("\nPerimeter of square:  %f", 4*side);
    printf("\nArea of square:  %f", side*side);

    // CIRCLE
    float r;
    float pi = 3.14;
    printf("\nEnter the value of the radius of the circle:  ");
    scanf("%f", &r);
    printf("\nCircumference of the circle is:  %f",(2*pi*r));
    printf("\nArea of the circle:  %f",(pi*r*r));

    return 0;

}