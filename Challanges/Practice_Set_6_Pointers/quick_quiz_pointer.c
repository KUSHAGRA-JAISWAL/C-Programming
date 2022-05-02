/**
 * @file quick_quiz_pointer.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-16
 * @copyright Copyright (c) 2022
 */

/*
Write a Program to perform certain operations on pointer like:-
1. Addition of a number to pointer.
2. Substraction of a number from a pointer.
3. Substraction of a pointer from another.
4. Comparision of two pointer variables.
*/

#include <stdio.h>

int main()
{
    // main function

    printf("CPerforming certain operations on pointers !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    printf("Addition of a number to pointer.\n");
    // giving a message in terminal.

    int a = 45;
    int *ptr1 = &a;
    // declaring variable and storing values in it

    printf("The value of a is : %d\n", a);
    printf("The address of a is : %u\n", ptr1);
    // printing the values and address of a
    ptr1++;
    // incrementing the pointer
    printf("The address of a is : %u\n", ptr1);
    // after incrementing the address will increase from 4 because int is 4 bytes.

    printf("-------------------------\n");
    // for some spacing in terminal.

    printf("Substraction of a number from a pointer.\n");
    // giving a message in terminal.

    int b = 44;
    int *ptr2 = &b;
    // declaring variable and storing values in it

    printf("The value of b is : %d\n", b);
    printf("The address of b is : %u\n", ptr2);
    // printing the values and address of b
    ptr1--;
    // incrementing the value
    printf("The address of b is : %u\n", ptr2);
    // after incrementing the address will decrease from 4 because int is 4 bytes.

    printf("-------------------------\n");
    // for some spacing in terminal.

    printf("Substraction of a pointer from another.\n");
    // giving a message in terminal.

    int c = 40;
    int d = 50;
    int *ptr3 = &c;
    int *ptr4 = &d;
    // declaring variable and storing values in it

    printf("The value of c is : %d\n", c);
    printf("The address of c is : %u\n", ptr3);
    // printing the values and address of c

    printf("The value of d is : %d\n", d);
    printf("The address of d is : %u\n", ptr4);
    // printing the values and address of c

    printf("The substraction between two pointers are : %u\n", (ptr3-ptr4));
    // substraction between two pointers.

    return 0;
}