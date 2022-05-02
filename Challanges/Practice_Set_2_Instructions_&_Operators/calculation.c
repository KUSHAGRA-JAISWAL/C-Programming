/**
 * @file calculation.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-02
 * @copyright Copyright (c) 2022
 */
 
/* Write a Program to perform basic calculations like Addition,Subtraction,Multiplication,Division. */
#include <stdio.h>
int main()
{
    // main function.

    int add = 10 + 5;
    // decleration of a variable which stores the operation of Addition of two numbers.

    int sub = 10 - 5;
    // decleration of a variable which stores the operation of substraction of two numbers.

    int multy = 10 * 5;
    // decleration of a variable which stores the operation of Multiplication of two numbers.

    int div = 10 / 5;
    // decleration of a variable which stores the operation of Division of two numbers.

    int rem = 10 % 5;
    // decleration of a variable which stores the operation of finding Remender of two numbers.

    printf("Performing Basic Calculations like (+),(-),(*),(/),(remender), ...!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

     printf("--------------------\n");
    // for some spacing in terminal.

    printf("Addition is : %d\n", add);

    printf("Substraction is : %d\n", sub);

    printf("Multiplication is : %d\n", multy);

    printf("Division is : %d\n", div);

    printf("Remender is : %d\n", rem);

    printf("---------------------------------------\n");
    // for some spacing in terminal.

    // we can also declare 2 variables and perform different operations on them like this:-

    int a = 10;
    int b = 5;
    // declaring variables and there values.
    printf("Sum is : %d\n", a + b);

    printf("Difference is : %d\n", a - b);

    printf("Multiplication is : %d\n", a + b);

    printf("Division is : %d\n", a / b);

    printf("Remender is : %d\n", a % b);

    return 0;
}