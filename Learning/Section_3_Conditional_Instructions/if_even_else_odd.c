/**
 * @file if_even_else_odd.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-03
 * @copyright Copyright (c) 2022
 */
 
/* Program to Understand the Concepts of if & else, Write a program to check wheather a number is even or odd. */

#include <stdio.h>
int main()
{
    // main function

    printf("EVEN Or ODD!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int number;
    // declaring variable.

    printf("Enter the Number to check wheather it is EVEN or ODD : ");
    // taking input from the user.

    scanf("%d", &number);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    if(number % 2 == 0){
        // using if condition to check it is Even or Odd.

        printf("\n%d is EVEN NUMBER!\n", number); 
        // printing the result.

    }
    else{
        // using else condition to throw a message if the condition is false.

        printf("\n%d is ODD NUMBER!\n", number); 
        // printing the result.

    }

    return 0;
}