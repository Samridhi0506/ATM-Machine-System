#include <stdio.h>

// Initializing the balance amount as 0.
float balance_amount = 0.0;

// Function for operations in ATM Machine
void atm_machine_transaction();

int main()
{
    atm_machine_transaction();
    printf("Thank you for the visit!\n");
    return 0;
}

// Function definition for operations in ATM Machine
void atm_machine_transaction()
{
    printf("Choices Available in the ATM Machine\n");
    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("3. Balance Amount\n\n");

    // Take an appropriate option to select which operation
    // you want to be performed by the ATM Machine.

    int option;
    printf("Your option: ");
    scanf("%d", &option);

    float withdraw_amount, deposit_amount;
    int new_transaction;

    switch (option)
    {
    // Case for Depositing money
    case 1:
        printf("\nEnter the amount to deposit: ");
        scanf("%f", &deposit_amount);
        balance_amount += deposit_amount;
        printf("Your current balance is Rs. %.2f. Thanks for depositing!\n", balance_amount);
        printf("Do you want a new transaction?\nPress 1 to 'proceed' and 2 to 'exit' from here\n");
        printf("Your option: ");
        scanf("%d", &new_transaction);
        if (new_transaction == 1)
        {
            atm_machine_transaction();
        }
        break;

    // Case for Money Withdrawal
    case 2:
        printf("\nPlease enter amount to withdraw: ");
        scanf("%f", &withdraw_amount);
        if (withdraw_amount > balance_amount)
        {
            printf("Insufficient fund! Please proceed to deposit money.\n");
            printf("Do you want a new transaction?\nPress 1 to 'proceed' and 2 to 'exit' from here\n");
            printf("Your option: ");
            scanf("%d", &new_transaction);
            if (new_transaction == 1)
            {
                atm_machine_transaction();
            }
        }
        else
        {
            balance_amount -= withdraw_amount;
            printf("You have withdrawn Rs. %.2f and your balance is Rs. %.2f\n", withdraw_amount, balance_amount);
            printf("Do you want a new transaction?\nPress 1 to 'proceed' and 2 to 'exit' from here\n");
            printf("Your option: ");
            scanf("%d", &new_transaction);
            if (new_transaction == 1)
            {
                atm_machine_transaction();
            }
        }
        break;

    // Case for checking current bank amount
    case 3:
        printf("Your current bank balance is: %.2f\n", balance_amount);
        printf("Do you want a new transaction?\nPress 1 to 'proceed' and 2 to 'exit' from here\n");
        printf("Your option: ");
        scanf("%d", &new_transaction);
        if (new_transaction == 1)
        {
            atm_machine_transaction();
        }
        break;

    // Case for options out of range
    default:
        printf("Invalid Option!\nplease choose from the above provided options to continue\n");
        printf("Do you want a new transaction?\nPress 1 to 'proceed' and 2 to 'exit' from here\n");
        printf("Your option: ");
        scanf("%d", &new_transaction);
        if (new_transaction == 1)
        {
            atm_machine_transaction();
        }
    }
}

