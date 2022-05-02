/**
 * @file call_by_value.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-12
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of Call by value. */

#include <stdio.h>

int sum(int a, int b);
// function prototype : it means we are making a function.
// sum is a function which takes a and b as input and returns integer as an output.

int main()
{
    // main function

    printf("Concepts Of Call By Value!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int x = 7;
    int y = 4;
    // declearing variables and storing values in it.

    printf("The value of x and y is : %d and %d\n", x, y);
    // prints the actual value of a and b.

    printf("The sum of 4 + 7 is : %d\n", sum(x, y));
    // function calling : it means we are calling the function and it print what's inside the function.

    printf("The value of x and y after function call is : %d and %d\n", x, y);
    // prints the result.

    return 0;
}

int sum(int a, int b)
// here a and b are parameters (it are placeholder in which we give values).
// function defination : it means we are defining what shoud be inside the function.
{
    int c;
    // declearing a variable.

    c = a + b;

    a = 100;

    b = 200;

    /*
    If sum is defined as sum(int a, int b), the value 7 and 4 are copied to a and b.
    Now even if we change the value of a and b, nothing happens to variable x and y.

    This is call by value.

    In c we usually make a call by value.
    */

    return c;
}