/**
* @file quiz_for_loop.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-05
* @copyright Copyright (c) 2022
*/

/* Write a Program to print first n natural numbers using for loop. */

#include <stdio.h>
int main()
{
    // main function

    printf("Print First n Natural Numbers Using For Loop!\n");
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
        printf("The value of i is : %d \n", i+1);
        // printing the result.
    }

    return 0;
}