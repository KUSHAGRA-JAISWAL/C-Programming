/**
 * @file structures.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-22
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of Structures. */

#include <stdio.h>

#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
// creating a structure which is custom datatype.

int main()
{
    // main function

    printf("Concepts of Structures!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int a = 32;
    // declearing a variable type integer.

    char b = 'k';
    // declearing a variable type character.

    float d = 250.43;
    // declearing a variable type float.

    // employee e1;
    // e1.salary = 34.454; ---> wont work without Employee Structure.

    /*******Structures******/

    /*
    A Structures in C is a collection of variables of different types under a single name.

    Arrays and Strings => can hold similar kind of data (int, float, char)

    Structures => can hold disimilar kind of data 
    */

    /*****Syntax for creating Structures******/

    /*
    A Structure can be created as follows:

        struct employee{
            int code;
            float salary;       ==> This declares new user defined data type.
            char name[10];
        };
         semicolon is important
    */

    struct employee e1;
    e1.code = 100;
    e1.salary = 25000.454;
    strcpy(e1.name, "kush");
    // using our custom datatype employee and e1 is variable.
    //e1.name = "kush"; ----> wont work because it is character array not a characcter pointer thats why we use strcpy.
    // here e1.code (.)dot is known as member operator, it sets the value.

    printf("The code of the employee is : %d\n", e1.code);
    // printing the code of the employee with custom datatype and variables.

     printf("The salary of the employee is : %.3f\n", e1.salary);
    // printing the salary of the employee with custom datatype and variables.

     printf("The name of the employee is : %s\n", e1.name);
    // printing the name of the employee with custom datatype and variables.

    return 0;
}