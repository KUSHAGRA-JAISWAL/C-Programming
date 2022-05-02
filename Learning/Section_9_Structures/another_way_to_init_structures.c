/**
 * @file quick_quiz_structures.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-22
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concept of Another way to initialize Structures. */

#include <stdio.h>

#include <string.h>

struct employee 
{
    int code;
    float salary;
    char name[10];
};
// creating a structure which is custom datatype.

int main()
{
    // main function

    printf("Another way to initialize Structures!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    struct employee kush = {100, 200.53, "KUSH"};
    // another way to initialize structures..

        printf("\nThe code of kush is : %d \n", kush.code);
        printf("The salary of kush is : %.3f \n", kush.salary);
        printf("The name of kush is : %s \n", kush.name);
        // printing the result.


    return 0;
}