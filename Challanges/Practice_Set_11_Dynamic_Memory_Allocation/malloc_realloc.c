/**
 * @file malloc_realloc.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-30
 * @copyright Copyright (c) 2022
 */

/* Write a Program, Create an array dynamically capable of storing 5 integers. Now use realloc so it can now store 1o Integers. */

#include <stdio.h>

#include <stdlib.h>

int main()
{
    // main function

    printf("Creating an array dynamically capable of storing 5 integers. !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int *ptr;
    // declearing avariable type of pointer.

    ptr = (int *)malloc(5 * sizeof(int));
    // memory allocation function.
    // we can use it like an array but a dynamic array.

    for (int i = 0; i < 5; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\n Enter the value for %d element : ", i + 1);
        scanf("%d", &ptr[i]);
        // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
        // &=address, it indicates where to store the input given by the user.
    }

    for (int i = 0; i < 5; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\nThe value for %d element  is : %d \n", i + 1, ptr[i]);
        // prints the result.
    }

    ptr = realloc(ptr, 10 * sizeof(int));
    // rellocating ptr using realloc().

    for (int i = 0; i < 10; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\n Enter the value for %d element : ", i + 1);
        scanf("%d", &ptr[i]);
        // taking input from the user.
    }

    for (int i = 0; i < 10; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\nThe value for %d element  is : %d \n", i + 1, ptr[i]);
        // prints the result.
    }

    return 0;
}