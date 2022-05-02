/**
 * @file relational_operators.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-03
 * @copyright Copyright (c) 2022
 */
 
/* Program to Understand the Concepts Relational Operators, Write a program to check age criteria is eligible for driving or not. */

#include <stdio.h>
int main()
{
    // main function

    printf("Eligible For Driving Or Not!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int age;
    // declearing a variable.

    printf("Enter the Age to check wheather you are Eligible For Driving : ");
    // taking input from the user.

    scanf("%d", &age);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

        /*
        Relational operators:-
        -> relational operator are use to eveluate conditions (true or false) inside the if statements.
        -> some examples of relational operator are:-
        -> 1. equals (==)
        -> 2. greater than equals (>=)
        -> 3. smaller than equals (<=)
        -> 4. greater than (>)
        -> 5. smaller than (<)
        -> 6. equal to (=)
        -> 7. not equal to (!=)
        */
    if (age>=90)
    {
        // using if condition to check it is Eligible for Driving or not.

        printf("\n%d age is not eligible for Driving!\n", age);
        // printing the result.
    }
    else
    {
        // using else condition to throw a message if the condition is false.

        printf("\n%d age is eligible for Driving!\n", age);
        // printing the result.
    }
    if (age==50){
        printf("Half Century\n");
    }

    return 0;
}