#include <stdio.h>

// Function Declaration

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);
int modulous(int, int);

int main() {

    // User Interface

    printf("CALCULATOR \n Select the operation to perform: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Modulous \n");
    int num1, num2, operationChoice;
    scanf("%d", &operationChoice);
    printf("\n \n Enter the first number:  ");
    scanf("%d", &num1);
    printf("\n Enter the second number:  ");
    scanf("%d", &num2);

    // Function Calling and Output using Switch Case

    switch (operationChoice)
    {
    case 1: printf("Addition of %d and %d is: %d", num1, num2, addition(num1, num2));
        break;

    case 2: printf("Subtraction of %d and %d is: %d", num1, num2, subtraction(num1, num2));
        break;

    case 3: printf("Multiplication of %d and %d is: %d", num1, num2, multiplication(num1, num2));
        break;

    case 4: printf("Division of %d and %d is: %d", num1, num2, division(num1, num2));
        break;

    case 5: printf("Modulous of %d and %d is: %d", num1, num2, modulous(num1, num2));
        break;

    default: printf("Inavild choice.");
        break;
    }
    return 0;
}

// Function Definition

int addition(int num_one, int num_two) {
    return(num_one + num_two);
}

int subtraction(int num_one, int num_two) {
    return(num_one - num_two);
}

int multiplication(int num_one, int num_two) {
    return(num_one * num_two);
}

int division(int num_one, int num_two) {
    return(num_one / num_two);
}

int modulous(int num_one, int num_two) {
    return(num_one % num_two);
}