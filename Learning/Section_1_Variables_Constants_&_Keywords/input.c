/**
 * @file input.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-01
 * @copyright Copyright (c) 2022
 */
 
/* Program to Understand how to take input from the user. */

#include <stdio.h>
int main()
{
    // main function.

    printf("Taking user input!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int a, b;
    // declaring variables.

    printf("Enter the First number : ");
    // taking input from the user.

    scanf("%d", &a);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("Enter the Second number : ");

    scanf("%d", &b);

    printf("The addition is : %d \n", a + b);
    // performing the addition operation on the userinput.

    return 0;
}