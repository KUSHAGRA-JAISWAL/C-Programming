/**
 * @file else_if.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-03
 * @copyright Copyright (c) 2022
 */
 
/* Program to Understand the Concepts of else if, Write a program to check wheather a number 1 or 2 or 3. */

#include <stdio.h>
int main()
{
    // main function

    printf("Concepts of else if!\n");
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

    if (number == 1)
    {
        // using if condition to check it is equals to 1,2 or 3.

        printf("\nYou have entered %d Your Number is equal to 1.", number);
        // printing the result.
    }
    else if (number == 2)
    {
        // use of else if.
        printf("\nYou have entered %d Your Number is equal to 2. \n", number);
        // printing the result.

    }
    else if (number == 3)
    {
        // use of else if.
        printf("\nYou have entered %d Your Number is equal to 3. \n", number);
        // printing the result.

    }
    else{
        // using else condition to throw a message if the condition is false.

        printf("\nYou have entered %d Your number is not equal to 1, 2 or 3.\n", number); 
        // printing the result.

    }

    return 0;
}