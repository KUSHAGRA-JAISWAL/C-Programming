/**
 * @file pointers_basics.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-11
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the Concepts of Pointers. */

#include <stdio.h>
int main()
{
    // main function

    printf("Concepts Of Pointers!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    /*
    What is Pointers?

    A pointer is a variable which stores the address of another variable.

    ex- int i = 34;   address of i is 5566
        int j = 5566; address of j is 7788

        here j is a poiter and j points to i .
    */

    int i = 35;
    // declearing a variable and storiiing value in it.

    int *j = &i;
    // declaring a variable j type of int-pointer and storing the address of i in j.

    printf("The Value of i is : %d\n", i);
    // it  will print the value of i which is 35.

    printf("The Value of i is : %d\n", *j);
    // we can also print value of i using *j, it is known as value address operator.

    // to print the address we use %p.
    // %p is for pointers and %u is for unsigned integer.

    printf("The address of i is : %p\n", &i);
    // this will print the address of i.

    printf("The address of i is : %p\n", j);
    // this will print the address of i.

    printf("The address of j is : %p\n", &j);
    // this will print the address of j.

    printf("The Value at address of j is : %p\n", *(&j));
    // this will print the value at the address of j.

    return 0;
}

