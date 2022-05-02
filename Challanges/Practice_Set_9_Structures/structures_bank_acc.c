/**
 * @file structures_bank_acc.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-24
 * @copyright Copyright (c) 2022
 */

/* Write a Program, Create a structure representing a bank account of a customer. */

#include <stdio.h>

#include <string.h>

typedef struct BankAccount
{
    int customer_id;
    int account_no;
    int year;
    char name[20];
    float ammount;
} bacc;
// creating a structure which is custom datatype, using type def to give an alias.

void accountDisplay(bacc c)
// function decleration & defination
{
    printf("_____________________________\n");
    // for some spacing in terminal.
    printf("|  Customer ID    : %d\n", c.customer_id);
    printf("|  Account No     : %d\n", c.account_no);
    printf("|  Opeaning Year  : %d\n", c.year);
    printf("|  Customer Name  : %s\n", c.name);
    printf("|  Total Amount  : %.2f\n", c.ammount);
    // prints the result..
    printf("_____________________________\n");
    // for some spacing in terminal.
}

int main()
{
    // main function

    printf("Creating a structure of Bank Account!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int n;
    // declearing a variable.

    printf("\nEnter the number of accounts you want to store  : ");
    scanf("%d", &n);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    bacc bank[n];
    // an array of structures..

    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        printf("-------------------------\n");
        // for some spacing in terminal.

        printf("\nEnter the id of customers[%d] is : ", i + 1);
        scanf("%d", &bank[i].customer_id);

        printf("Enter the Account No of customers[%d] is : ", i + 1);
        scanf("%d", &bank[i].account_no);

        printf("Enter the year of opeaning the account of customers[%d] is : ", i + 1);
        scanf("%d", &bank[i].year);

        printf("Enter the Name of customers[%d] is : ", i + 1);
        scanf("%s", bank[i].name);

        printf("Enter the Ammount of customers[%d] is : ", i + 1);
        scanf("%f", &bank[i].ammount);
        // taking input from the user..
    }

    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        printf("-------------------------\n");
        // for some spacing in terminal.

        accountDisplay(bank[i]);
        // function calling..
    }

    return 0;
}