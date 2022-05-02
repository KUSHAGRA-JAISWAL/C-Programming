/**
 * @file pointer_arthmetics.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-16
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the Concepts of pointer arthmetics. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of pointer arthmetics !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    printf("int values have 4 bytes\n");
    // giving a message in terminal.

    int a = 45;
    int *ptr1 = &a;
    // declaring variable and storing values in it

    printf("The value of a is : %d\n", a);
    printf("The address of a is : %p\n", ptr1);
    // printing the values and address of a
    ptr1++;
    // incrementing the value
    printf("The address of a is : %p\n", ptr1);
    // after incrementing the address will increase from 4 because int is 4 bytes.
    

    printf("-------------------------\n");
    // for some spacing in terminal.

    printf("char values have 1 byte\n");
    // giving a message in terminal.

    char c = 'A';
    char *ptr2 = &c;
    // declaring variable and storing values in it

    printf("The value of c is : %d\n", c);
    printf("The address of c is : %p\n", ptr2);
    // printing the values and address of c.
     ptr2++;
    // incrementing the value
    printf("The address of c is : %p\n", ptr2);
    // after incrementing the address will increase from 1 because char is 1 byte.

    return 0;
}



