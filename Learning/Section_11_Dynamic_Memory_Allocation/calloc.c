/**
 * @file calloc.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-30
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of calloc() in Dynamic Memory Allocation. */

#include <stdio.h>

#include <stdlib.h>

int main()
{
    // main function

    printf("Concepts of calloc() in Dynamic Memory Allocation !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    /************* calloc() function **************/

    /*
    calloc() stands for continuous allocation.
    It initialize each memory block with a default value of zero.

    Syntax: ptr = (float*) calloc(30, sizeof(float))

    calloc()-> Allocates contiguous space in memory for 30 blocks(float).

    (float*)-> casting void pointer to float.

    (30*) ---> space for 30 floats.

    sizeof --> returns the size of 1st float.

    If the space is not sufficient, memory allocation fails and a NULL pointer is returned.
    */

    int *ptr;
    // declearing avariable type of pointer.

    ptr = (int *)calloc(6, sizeof(int));
    // continuous allocation function.
    // we can use it like an array but a dynamic array.

    for (int i = 0; i < 6; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\n Enter the value for %d element : ", i + 1);
        scanf("%d", &ptr[i]);
        // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
        // &=address, it indicates where to store the input given by the user.
    }

    for (int i = 0; i < 6; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\nThe value for %d element  is : %d \n", i + 1, ptr[i]);
        // prints the result.
    }

    return 0;
}