#include <stdio.h>

int main() {
    // declaration of variables

    int depositedMoney, option, withdrawalAmount, moneyDeposit, bankBalance = 1000, pin;


    // bank functions:

    printf("Select the option you need to perform at bank. \n");
    printf("\n 1. Deposit the money in the bank.");
    printf("\n 2. Withdraw money from the bank.");
    printf("\n 3. Change the pin for the bank account.\n");


    // user input

    scanf("%d", &option);


    // logic

    if (option == 1)
    {
        printf("\n Enter the amount to deposit:  ");
        scanf("%d", &depositedMoney);
        printf("\n %d Amount has been successfully deposited.", depositedMoney);
        bankBalance += depositedMoney;
    }
    else if (option == 2)
    {
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
    else if (option == 3)
    {
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
}