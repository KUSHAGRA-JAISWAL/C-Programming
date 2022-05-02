/**
 * @file sum_function.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/* Program to make a user defined function named sum which can perform addition between two numbers. */

#include <stdio.h>

int sum(int a, int b);
// function prototype : it means we are making a function.
// sum is a function which takes a and b as input and returns integer as an output.

int main()
{
    // main function

    printf("\nUser Defined Function For Addition!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int c;
    // declaring a variable.

    c = sum(2, 5);
    // hear 2 and 5 are known as arguments(which is known as actual value).
    // function calling : it means we are calling the function and it print what's inside the function.

    printf("The Value Of C is : %d\n", c);
    // printing the result.

    return 0;
}

int sum(int a, int b)
// here a and b are parameters (it are placeholder in which we give values).
// function defination : it means we are defining what shoud be inside the function.
{
    int result;
    // declearing a variable.

    result = a + b;

    return result;
}