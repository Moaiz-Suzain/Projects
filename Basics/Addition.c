#include <stdio.h>

int main() {

    int num1 = 13;
    int num2 = 17;

    // size of different datatypes
    printf("Size of integer: %d \n", sizeof(int)); // 4
    printf("Size of float: %d \n", sizeof(float)); // 4
    printf("Size of char: %d \n", sizeof(char)); // 1
    printf("Address of num1: %d \n", &num1);
    printf("Address of num2: %d \n", &num2);

    int temp = num1 + num2;
    printf("Sum of %d and %d is %d", num1, num2, temp);

    return 0;

}