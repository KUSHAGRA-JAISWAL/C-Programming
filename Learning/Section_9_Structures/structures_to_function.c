/**
 * @file structures_to_function.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-23
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concept of passing structures to a function. */

#include <stdio.h>

#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
// creating a structure which is custom datatype.

void show(struct employee emp)
// function decleration & defination
{
    printf("The code of the employee is : %d\n", emp.code);
    printf("The salary of the employee is : %f\n", emp.salary);
    printf("The name of the employee is : %s\n", emp.name);

    emp.code = 105;
    // it will not change the actual value because function has only a copy of structures.
}

int main()
{
    // main function

    printf("Concepts of pointer to Structures!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    struct employee e1;
    // using our custom datatype employee and e1 is variable.

    struct employee *ptr;
    // creating pointer of custom datatype.

    ptr = &e1;
    // storing the address of e1 in ptr.

    ptr -> code = 101;
    ptr -> salary = 20.20;
    strcpy(ptr -> name, "kush");
    // assigning value.

    show(e1);
    // function calling..

    return 0;
}