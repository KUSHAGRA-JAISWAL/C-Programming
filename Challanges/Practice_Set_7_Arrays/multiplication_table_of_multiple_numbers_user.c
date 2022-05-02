/**
 * @file multipliation_table_of_multiple_numbers_user.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-19
 * @copyright Copyright (c) 2022
 */

/* Write a program to create an array of size n x m contaning multiplication table of n numbers respectively.
Take the input from the user. */

#include <stdio.h>

void multiTable(int *mulTable, int num, int n)
// function defination..
{
    printf("The multiplication table of %d is : \n", num);
    // printing the message..

    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        mulTable[i] = num * (i + 1);
        // stores the result in array..
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d \n", num, i + 1, mulTable[i]);
        // printing the result.
    }

    printf("***********************************************\n\n");
    // printing the message..
}

int main()
{
    // main function

    printf("\n storing multiplication table of multiple numbers in array!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int n, m;
    // declearing a variable

    printf("\nEnter the size of the array for table of numbers : ");
    scanf("%d", &n);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("\nEnter the value till how many numbers you want the multipe of table  : ");
    scanf("%d", &m);

    int mulTable[n][m];
    // creating 2D array of n x m .

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the numbers for the table  : ");
        scanf("%d", &mulTable[n][i]);
        // take input and stores the number in array ..
    }

    for (int i = 0; i < n; i++)
    {
        multiTable(mulTable[i], mulTable[n][i], m);
        // function calling..
    }

    return 0;
}
