/**
 * @file typedef.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-23
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concept of typedef keyword in structures. */

#include <stdio.h>

#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
}emp;
// creating a structure which is custom datatype.

/*********** typedef keyword ***********/

/*
we can use typedef keyword to create an alias name for datatypes in C.

typedef are most commonly used with structures.

        struct complex {

            int num;             ==> struct complex  c1,c2..
            float img;             for defining complex numbers.
        };

        typedef struct complex {

            int num;             ==> cmp  c1,c2..
            float img;             for defining complex numbers.
        }cmp;
*/


void show(struct employee emp)
// function decleration & defination
{
    printf("The code of the employee is : %d\n", emp.code);
    printf("The salary of the employee is : %.3f\n", emp.salary);
    printf("The name of the employee is : %s\n", emp.name);

}

int main()
{
    // main function

    printf("Concepts of pointer to Structures!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

   emp e1;
    // using our custom datatype employee and e1 is variable.

   emp *ptr;
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