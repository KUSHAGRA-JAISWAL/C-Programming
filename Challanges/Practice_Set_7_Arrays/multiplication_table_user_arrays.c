/**
 * @file multipliation_table_arrays.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-18
 * @copyright Copyright (c) 2022
 */

/* Write a program to create an array of 10 integers and store multiplication table of n in it. Take the input from the user. */

#include <stdio.h>

int main()
{
    // main function

    printf("\n storing multiplication table of n in array!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int multiplication[10];
    // creating array of 10 numbers.

    int n;
    // dlecaring a variable.

    printf("\nEnter the number for the table to store in array : ");
    scanf("%d", &n);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    for (int i = 0; i < 10; i++)
    // for loop first initalize then test and then increment.
    {
        multiplication[i] = n * (i + 1);
        // stores the result in array..
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", n, i + 1, multiplication[i]);
        // printing the result.
    }

    return 0;
}