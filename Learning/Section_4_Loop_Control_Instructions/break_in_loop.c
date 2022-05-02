/**
* @file break_in_loop.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-05
* @copyright Copyright (c) 2022
*/


/* Program to Understand the Concepts of Break Statement in Loops. */

#include <stdio.h>
int main()
{
    // main function

    printf("Concepts of Break Statement in Loops!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int n;
    // declaring variable.

    printf("Enter the value of n : ");
    // taking input from the user.

    scanf("%d", &n);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        printf("The value of i is : %d \n", i);
        // printing the result.

        if (i==4)
        // using if condition to check it.

        break;
        // it is use to break the loop.
    }

    return 0;
}