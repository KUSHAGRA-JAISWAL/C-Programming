/**
 * @file increase_value_of_a.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-12
 * @copyright Copyright (c) 2022
 */

/* Write a Program to Change the value of a variable to 10 times of its current value.
   Write a function and pass the value by reference. */

#include <stdio.h>

int ten(int *x);
// *x means actual value of x.
// function prototype : it means we are making a function.

int main()
{
    // main function

    printf("Change the Value Ten Times by Passing Value by Reference!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int a = 5;
    // declearing a variable and storing values in it.

    printf("The value of a is : %d\n", a);
    // prints the value of a.

    printf("The value of a, passing by reference is : %d\n", ten(&a));
    // function calling : it means we are calling the function and it print what's inside the function.

    return 0;
}

int ten(int *x)
// *x means actual value of x.
// function defination : it means we are defining what shoud be inside the function.

{
    int result;
    // declearing a variable.

    result = (*x) * 10;
    // formula of increasing 10 times.

    return result;
}