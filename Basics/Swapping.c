#include <stdio.h>

int main() {

    int num1 = 13;
    int num2 = 17;
    int temp;

    printf("Before swapping the value of num1 is %d and num2 is %d. \n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("After swapping the value of num1 is %d and num2 is %d. \n", num1, num2);

    return 0;

}