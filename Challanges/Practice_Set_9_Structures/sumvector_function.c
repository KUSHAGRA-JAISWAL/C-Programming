
/**
 * @file sumvector_function.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-23
 * @copyright Copyright (c) 2022
 */

/* Write a function sumvector which returns the sum of two vectors passed to it. The vector must be two-dimensional. */

#include <stdio.h>

#include <string.h>

struct vector
{
    int x;
    int y;
};
// creating a structure which is custom datatype.

struct vector sumVector(struct vector v1, struct vector v2)
// function defiaation and decleration
{
    struct vector result;
    // using our custom datatype vector and result is variable.

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return  result;
}

int main()
{
    // main function

    printf("2D vector using Structures!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

   struct vector v1, v2, sum;
    // using our custom datatype vector and v1 is variable.

    v1.x = 5;
    v1.y = 9; 
    // assigning value.

    printf("X dimension is %d and Y deminsion is %d\n", v1.x, v1.y);
    // prints the result.

    v2.x = 4;
    v2.y = 4; 
    // assigning value.

    printf("X dimension is %d and Y deminsion is %d\n", v2.x, v2.y);
    // prints the result.

    sum = sumVector(v1, v2);
    // function calling

    printf("X dimension result is %d and Y deminsion result is %d\n", sum.x, sum.y);
    // prints the result.

    return 0;
}