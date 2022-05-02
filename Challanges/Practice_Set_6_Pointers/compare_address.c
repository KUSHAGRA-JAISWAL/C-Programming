/**
 * @file compare_address.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-12
 * @copyright Copyright (c) 2022
 */

/* Write a program having a variable i. Print the address of i, pass this variable to a function and print its address.
Are these addresses same ? Why? */

#include <stdio.h>

void print_address(int a)
// function prototype : it means we are making a function.
// function defination : it means we are defining what shoud be inside the function.
{
    printf("The value of a is : %d\n", a);
    // prints the value of a.

    printf("The address of a is : %p\n", &a);
    // prints the address of a.
}
int main()
{
    // main function

    printf("Comparing the Addresses!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int i = 2;
    // declearing a variable and storing values in it.

    printf("The value of i is : %d\n", i);
    // prints the value of i.
    
    print_address(i);
    // function calling : it means we are calling the function and it print what's inside the function.

    printf("The address of i is : %p\n", &i);
    // % p is pointer which points the address.
    // &i prints the address of i.

    print_address(i);
    // function calling : it means we are calling the function and it print what's inside the function.

    return 0;
}