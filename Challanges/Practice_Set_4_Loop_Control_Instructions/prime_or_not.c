/**
 * @file prime_or_not.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-01
 * @copyright Copyright (c) 2022
 */

/* Write a Program to Check wheather it is Prime or not using loops. */

#include <stdio.h>
int main()
{
    // main function

    printf("Prime or Not!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    // A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers.
    // a number which is divisible by 1 or it self is a prime, example :- 13 , 7 , etc..

    int number;
    int prime = 1;
    // declearing a variable and storing values in it.

    printf("Enter the Number to Check wheather it is Prime or Not : ");
    // taking input from the user.

    scanf("%d", &number);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    for (int i = 2; i < number; i++)
    // for loop first initalize then test and then increment.
    {
        if (number % i == 0)
        // using if condition to check it.
        {
            prime = 0;
            break;
            // use to break the loop.
        }
    }
    if (prime == 0)
    // using if condition to check it.
    {

        printf("The number %d you Entered is Not Prime!\n", number);
        // printing the result.
    }
    else
    // using else condition to throw a message if the condition is false.
    {

        printf("The number %d you Entered is Prime!\n", number);
        // printing the result.
    }

    return 0;
}