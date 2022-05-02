/**
 * @file logical_operators.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-03
 * @copyright Copyright (c) 2022
 */
 
/* Program to Understand the Concepts Logical Operators, Write a program to check age criteria is eligible for driving or not. */

#include <stdio.h>
int main()
{
    // main function

    printf("Eligible For Driving Or Not!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int age, vip;
    // declearing a variable.

    vip=1;
    // storing values.

    printf("Enter the Age to check wheather you are Eligible For Driving : ");
    // taking input from the user.

    scanf("%d", &age);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

        /*
        Logical operators:-
        -> logical operator are use to provide logic in our C programming.
        -> some examples of logical operator are:-
        -> 1. AND (&&)
        -> 2. OR (||)
        -> 3. NOT (!)
        */
    if ((age <= 75 && age >= 18) || (vip==1))
    {
        // using if condition to check it is Eligible for Driving or not.

        printf("\nYou are eligible for Driving!\n");
        // printing the result.
    }
    else
    {
        // using else condition to throw a message if the condition is false.

        printf("\n%d age is not eligible for Driving!\n", age);
        // printing the result.
    }
    if (age==50)
    {
        printf("Half Century!\n");
    }

    return 0;
}