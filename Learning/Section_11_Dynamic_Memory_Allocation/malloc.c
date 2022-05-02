/**
 * @file malloc.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-30
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of malloc() in Dynamic Memory Allocation. */

#include <stdio.h>

#include <stdlib.h>

int main()
{
    // main function

    printf("Concepts of malloc() in Dynamic Memory Allocation !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    /************* malloc() function **************/

    /*
    malloc() stands for memory allocation.
    It takes number of bytes to be allocated as input and return a pointer of type void.

    Syntax: ptr = (int*) malloc(30 * sizeof(int))

    (int*) --> casting void pointer to int.

    (30*) ---> space for 30 ints.

    sizeof --> returns the size of 1st int.
    */

    int *ptr;
    // declearing avariable type of pointer.

    printf("The Size of int in my pc is : %d\n", sizeof(int));
    // this will print the size of interger in my system artecture.

    printf("The Size of float in my pc is : %d\n", sizeof(float));
    // this will print the size of float in my system artecture.

    printf("The Size of char in my pc is : %d\n", sizeof(char));
    // this will print the size of character in my system artecture.

    ptr = (int *)malloc(6 * sizeof(int));
    // memory allocation function.
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