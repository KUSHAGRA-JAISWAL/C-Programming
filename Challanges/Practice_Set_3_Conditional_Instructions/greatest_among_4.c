/**
 * @file greatest_among_4.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-04
 * @copyright Copyright (c) 2022
 */
 
/* Write a program to find the gratest number among 4 numbers given by the user. */

#include <stdio.h>
int main()
{
    // main function

    printf("Greatest Among Four!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int number1, number2, number3, number4;
    // declaring variable.

    printf("Enter First Number  : ");
    // taking input from the user.

    scanf("%d", &number1);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("Enter Second Number : ");

    scanf("%d", &number2);

    printf("Enter Third Number  : ");

    scanf("%d", &number3);

    printf("Enter Fourth Number : ");

    scanf("%d", &number4);

    if (number1 > number2 && number1 > number3 && number1 > number4)
    // using if condition to check which is greater.
    {
        printf("First Number is %d Which is Gratest Among All!\n", number1);
        // printing the result.
    }

    else if (number2 > number3 && number2 > number4)
    // using if condition to check which is greater.
    {
        printf("Second Number is %d Which is Gratest Among All!\n", number2);
        // printing the result.
    }

    else if (number3 > number4)
    // using if condition to check which is greater.
    {
        printf("Third Number is %d Which is Gratest Among All!\n", number3);
        // printing the result.
    }

    else
    // using else condition to throw a message if the condition is false.
    {
        printf("Fourth Number is %d Which is Gratest Among All!\n", number4);
        // printing the result.
    }

    return 0;
}