/**
 * @file realloc_multiplication_table.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-30
 * @copyright Copyright (c) 2022
 */

/* Write a Program, Create an array of multiplication table of 7 upto 10 (7 x 10 = 10). 
Use realloc to store 15 numbers (from 7 x 1 to 7 x 15). */

#include <stdio.h>

#include <stdlib.h>

int main()
{
    // main function

    printf("Multiplication table of 7 using realloc. !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int *ptr;
    // declearing avariable type of pointer.

    ptr = (int *)malloc(10 * sizeof(int));
    // memory allocation function.
    // we can use it like an array but a dynamic array.

    printf("\n Table of 7 using malloc upto 7 x 10.\n");

    for (int i = 0; i < 10; i++)
    // for loop first initalize then test and then increment.
    {
        printf("7 X %d = %d\n", i + 1, (7 * (i+1)));
        // prints the result.
    }

    ptr = realloc(ptr, 15 * sizeof(int));
    // rellocating ptr using realloc().

    printf("\n Table of 7 using realloc upto 7 x 15.\n");

    for (int i = 0; i < 15; i++)
    // for loop first initalize then test and then increment.
    {
        printf("7 X %d = %d\n", i + 1, (7 * (i+1)));
        // prints the result.
    }

    return 0;
}