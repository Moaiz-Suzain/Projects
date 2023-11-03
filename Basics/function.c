#include <stdio.h>

void Hallo(); // function declaration
int sumofallDigit(int);

int main() {
    printf("\n %d",sumofallDigit(123));
    printf("\n %d",sumofallDigit(487));
    int num_1=23,num_2=34;
    myswap(&num_1,&num_2);
    printf("\n__________________________________________________________");
    printf("\n after swapping");\
    printf("\n%d",num_1);
    printf("\n%d",num_2);
    return 0;
}

void Hallo() {  //function definition
    printf("Hello World!");
    printf("\n Coding is fun!");
}

int sumofallDigit(int num) {
    int sum = 0;
    while( num != 0) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}
void myswap(int *num_one,int *num_two)
{
    int temp=*num_one;
    *num_one=*num_two;
    *num_two=temp;
    printf("\n num_one=%d",*num_one);
    printf("\n num_two=%d",*num_two);
}































