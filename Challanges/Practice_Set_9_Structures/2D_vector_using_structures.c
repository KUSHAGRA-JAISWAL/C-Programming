
/**
 * @file 2D_vector_using_structures.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-23
 * @copyright Copyright (c) 2022
 */

/* Write a Program to create a two dimensional vector using structures in C. */

#include <stdio.h>

#include <string.h>

struct vector
{
    int x;
    int y;
};
// creating a structure which is custom datatype.

int main()
{
    // main function

    printf("2D vector using Structures!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

   struct vector v1,v2;
    // using our custom datatype vector and v1 is variable.

    v1.x = 54;
    v1.y = 44; 
    // assigning value.

    printf("X dimension is %d and Y deminsion is %d\n", v1.x, v1.y);
    // prints the result.

    v2.x = 540;
    v2.y = 404; 
    // assigning value.

    printf("X dimension is %d and Y deminsion is %d\n", v2.x, v2.y);
    // prints the result.

    return 0;
}