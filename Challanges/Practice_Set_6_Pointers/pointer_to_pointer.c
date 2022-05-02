/**
 * @file pointer_to_pointer.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-12
 * @copyright Copyright (c) 2022
 */

/* Write a program to print the value of variable i by using "pointer to pointer" type of variable. */

#include <stdio.h>
int main()
{
    // main function

    printf("Printing value using Pointer to Pointer!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int i = 10;
    // declaring a variable and storing values in it.

    int *ptr = &i;
    // declearing a variable j which is int-pointer which stores the address of i.

    int **ptr2 = &ptr;
    // declearing a variable k which is int-pointer to pointer which stores the address of j.

    printf("The value of i is : %d\n", i);
    // prints the value of i.

    printf("The address of i is : %p\n", &i);
    // prints the address of i.

    printf("The value of i stored in pointer ptr is : %d\n", *ptr);
    // prints the value of ptr , which is equal to i.

    printf("The address of pointer ptr is : %p\n", &ptr);
    // prints the address of ptr.

    printf("The value of i store in pointer to pointer ptr2 is : %d\n", **ptr2);
    // prints the value of ptr2, which is equal to i.

    printf("The address of pointer to pointer ptr2 is : %p\n", &ptr2);
    // prints the address of ptr2.

    return 0;
}