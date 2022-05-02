/**
 * @file free.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-30
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of free() in Dynamic Memory Allocation. */

#include <stdio.h>

#include <stdlib.h>

int main()
{
    // main function

    printf("Concepts of free() in Dynamic Memory Allocation !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    /************* free() function **************/

    /*
    We can use free() function to deallocate  the memory.
    The memory allocated using calloc / malloc is not deallocated automatically.

    Syntax:  free(ptr);  --> Memory of ptr is released.
    */

    int *ptr;
    int *ptr2;
    // declearing avariable type of pointer.

    ptr = (int *)calloc(600, sizeof(int));
    // continuous allocation function.
    // we can use it like an array but a dynamic array.

    for (int i = 0; i < 600; i++)
    // for loop first initalize then test and then increment.
    {
        ptr2 = (int *)calloc(60000000, sizeof(int));
        // it will take free memory every time user enter the value.

        printf("\n Enter the value for %d element : ", i + 1);
        scanf("%d", &ptr[i]);
        // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
        // &=address, it indicates where to store the input given by the user.

        free(ptr2);
        // it will free the same memory everytime user will enter the value.
    }

    for (int i = 0; i < 600; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\nThe value for %d element  is : %d \n", i + 1, ptr[i]);
        // prints the result.
    }

    return 0;
}