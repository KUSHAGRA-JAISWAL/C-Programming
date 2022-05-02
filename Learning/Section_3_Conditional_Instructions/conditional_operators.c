/**
 * @file conditional_operators.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-03
 * @copyright Copyright (c) 2022
 */
 
/* Program to Understand the Concepts of Conditional Operators, Write a program to check wheather a number is equal to 5 or not. */

#include <stdio.h>
int main()
{
    // main function

    printf("Concepts of Conditional Operators!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int number;
    // declaring variable.

    printf("Enter the Number : ");
    // taking input from the user.

    scanf("%d", &number);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    // Conditional Operators are one liner, it means ther are if and else but in one line.
    // here (?) is if and (:) is else.

    (number==5)? printf("You have Entered %d which is equal to 5.\n",number) : printf("You have Entered %d which is not equal to 5.\n",number);
    // this is the use of conditional operator, you have to write all this code in one line.

    return 0;
}