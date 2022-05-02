/**
 * @file diff_bw_two_init_methods.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-20
 * @copyright Copyright (c) 2022
 */

/* Program to understand the difference between two init methods in strings. */

#include <stdio.h>

int main()
{
    // main function

    printf("Difference between two init methods in strings!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    /*
    Note

    1. once a string is define using char s[] = "kush", it cannot be initialized to something else.

    2. A string defined using pointers can be initialized as ptr = "hrv";
    */

    char *ptr = "kush";
    // creating string..
    // if we create with this method we can assign another value in it at the same memory location.

    //char ptr[] = "kush";
    // creating string..
    // if we create with this method we can not assign another value in it at the same memory location.

    ptr = "hrv";
    // reassign different values.

    printf("%s\n", ptr);
    // prints the result.

    return 0;
}