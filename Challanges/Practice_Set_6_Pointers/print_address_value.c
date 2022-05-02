/**
 * @file print_address_value.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-12
 * @copyright Copyright (c) 2022
 */

/* Write a Program to print the address of the variable, use this address to get the value of the variable. */

#include <stdio.h>
int main()
{
    // main function

    printf("Printing Address of the Variable and Using Address to Print Actual Value!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int a = 5;
    // declearing a variable and storing values in it.

    printf("The Address of Variable a is : %p\n", &a);
    // %p is pointer which points the address.
    // &a prints the address of a.

    printf("The Value of a Using Address is : %d\n", *(&a));
    // prints the value of a using pointer and address.

    return 0;
}