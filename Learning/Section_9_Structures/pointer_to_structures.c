/**
 * @file pointer_to_structures.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-23
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concept of pointer to Structures. */

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

    //(*ptr).code = 101;
    // assigning value.
    // another way to use this ..

    ptr -> code = 101;
    /* 
    Insted of writting (*ptr).code, we can use arrow operator to access structures properties as follows:-  
    
                (*ptr).code or ptr -> code

    here (->) is known as arrow operator.
    */

    printf("The code is : %d\n", e1.code);
    // prints the result

    return 0;
}