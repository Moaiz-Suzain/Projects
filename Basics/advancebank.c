#include <stdio.h>

int depositMoney();
int moneyWithdrawal();
int changePin();

int main() {
    int choice, count = 0;
    char ans = 'yes';
    printf("Select the operation to perform at the bank: \n 1. Deposit Money \n 2. Withdraw Money \n 3. Change the pin \n");
    scanf("%d", &choice);
    while (ans == 'yes') {
        if (count == 0) {
            printf("You are required to deposit a minimum of 1000 first.");
            depositMoney();
        }
        else {
            switch (choice) {
            case 1: depositMoney();
                break;

            case 2: moneyWithdrawal();
                break;

            case 3: changePin();
                break;

            default:  printf("Inavild choice.");
                break;
            }
        }
    }
    return 0;
}

depositMoney() {
    printf("\n Enter the amount to deposit:  ");
    scanf("%d", &depositedMoney);
    printf("\n %d Amount has been successfully deposited.", depositedMoney);
    bankBalance += depositedMoney;
}

moneyWithdrawal() {
    printf("\n Enter the amount to Withdraw:  ");
    scanf("%d", &withdrawalAmount);

    if (withdrawalAmount < bankBalance)
    {
        printf("\n %d Amount has been successfully withdrawn.", withdrawalAmount);
        bankBalance -= withdrawalAmount;
    }
    else
    {
        printf("\n The amount selected for withdrawal is greater than the bank balance. \n Process terminated.");
    }
}

changePin() {
    printf("\n Confirm the old pin before changing the pin.");
    printf("\n Enter the old pin:  ");
    scanf("%d", &pin);

    if (pin == 1234)
    {
        printf("\n Enter the new pin:  ");
        scanf("%d", &pin);
    }
    else
    {
        printf("Invalid Password.");
    }
}