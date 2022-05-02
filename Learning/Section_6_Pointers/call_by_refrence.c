/**
 * @file call_by_reference.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-12
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of Call by Reference. */

#include <stdio.h>

void wrong_swap(int a, int b);
// function prototype : it means we are making a function.
// wrong_swap is a function which takes a and b as input and returns integer as an output.

void swap(int *a, int *b);
// function prototype : it means we are making a function.
// swap is a function which takes *a and *b as pointer and returns the value at the address of a and b.

int main()
{
    // main function

    printf("Concepts Of Call By Reference!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int x = 4;
    int y = 3;
    // declearing variables and storing values in it.

    printf("The value of x and y before swap is : %d and %d\n", x, y);

    //wrong_swap(x, y);
    // it will not work due to call by value.
    // function calling : it means we are calling the function and it print what's inside the function.

    swap(&x, &y);
    // it will work due to call by reference.


    printf("The value of x and y after swap is : %d and %d\n", x, y);

    return 0;
}

void wrong_swap(int a, int b)
// here a and b are parameters (it are placeholder in which we give values).
// function defination : it means we are defining what shoud be inside the function.
{
    int temp;
    // declearing a variable.

    temp = a;
    // storing value of a in temp.

    a = b;
    // storing value of b into a.

    b = temp;
    // storing value of temp in b.
}

/*
Call by Reference

Here the address of the variables is passed to the function as argument.

Now since the addreses are passed to the function, the function can now 
modify the value of a variable in calling function using * and & opearators.
*/

void swap(int *a, int *b)
// *a means actual value of a, *b is actal value of b.
{
    int temp;
    // declearing a variable.

    temp = *a;
    // storing value of *a in temp.

    *a = *b;
    // storing value of *b into *a.

    *b = temp;
    // storing value of temp in *b.
}