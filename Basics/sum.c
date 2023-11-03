#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("\n Enter a number:  ");
    scanf("%d", &num);

    while(num != 0) {
        sum += (num % 10);
        num /= 10; // num = num / 10
    }
    printf("The sum of digits of the given number is %d", sum);
    return 0;
}