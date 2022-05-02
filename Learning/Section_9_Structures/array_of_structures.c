/**
 * @file quick_quiz_structures.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-22
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concept of Array of Structures. */

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

    printf("Concept of Array of Structures!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    struct employee facebook[100];
    // an array of structures..

    facebook[0].code = 100;
    facebook[0].salary = 200;
    strcpy(facebook[0].name, "kush");

    facebook[1].code = 101;
    facebook[1].salary = 250;
    strcpy(facebook[1].name, "mohan");

    facebook[2].code = 102;
    facebook[2].salary = 400;
    strcpy(facebook[2].name, "hrv");
    // this is the array of structures of a facebook where we can store the data of 100 employees.

    for (int i = 0; i < 3; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\nThe code of employee[%d] is : %d \n", i + 1, facebook[i].code);
        printf("The salary of employee[%d] is : %.3f \n", i + 1, facebook[i].salary);
        printf("The name of employee[%d] is : %s \n", i + 1, facebook[i].name);
        // printing the result.
    }

    return 0;
}