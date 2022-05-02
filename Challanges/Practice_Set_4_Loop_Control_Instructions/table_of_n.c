/**
* @file table_of_n.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-06
* @copyright Copyright (c) 2022
*/

/* Write a Program to print multiplication table of a given number n. */

#include <stdio.h>
int main()
{
    // main function

    printf("Multiplication Table Of n!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int n;
    // declaring variable.

    printf("Enter the Number to print it's table : ");
    // taking input from the user.

    scanf("%d", &n);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    for (int i = 1; i <= 10; i++)
    // for loop first initalize then test and then increment.
    {
        printf(" %d x %d = %d \n", n, i, n * i);
        // printing the result.

    }
    return 0;
}