/**
 * @file arrays_initializations.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-16
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the different ways of initializations in Arrays. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of types of initializations in Arrays!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    printf("Storing int values\n");
    // giving a message in terminal.

    int a[] = {34, 44, 54};
    // initializing array type of int.

    printf("The value of a[0] is : %d\n", a[0]);
    printf("The value of a[1] is : %d\n", a[1]);
    printf("The value of a[2] is : %d\n", a[2]);
    // printing the values stored in arrays..

    printf("-------------------------\n");
    // for some spacing in terminal.

    printf("Storing float values\n");
    // giving a message in terminal.

    float b[] = {3.3, 4.4, 50};
    // initializing array type of float.

    printf("The value of b[0] is : %f\n", b[0]);
    printf("The value of b[1] is : %f\n", b[1]);
    printf("The value of b[2] is : %f\n", b[2]);
    // printing the values stored in arrays..

    printf("-------------------------\n");
    // for some spacing in terminal.

    printf("Storing char values\n");
    // giving a message in terminal.

    char c[] = {'H','K','H'};
    // initializing array type of char.

    printf("The value of c[0] is : %c\n", c[0]);
    printf("The value of c[1] is : %c\n", c[1]);
    printf("The value of c[2] is : %c\n", c[2]);
    // printing the values stored in arrays..

    return 0;
}