/**
 * @file quick_quiz_calloc.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-30
 * @copyright Copyright (c) 2022
 */

/* Write a Program to create an array of size n using calloc()
where n is a integer enterd by the user in Dynamic Memory Allocation. */

#include <stdio.h>

#include <stdlib.h>

int main()
{
    // main function

    printf("Creating an array of size n using calloc()  !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int *ptr;
    int n;
    // declearing avariable type of pointer.

    printf("\n How many Integgers you want to enter : ");
    scanf("%d", &n);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    ptr = (int *)calloc(n, sizeof(int));
    // continuous allocation function.
    // we can use it like an array but a dynamic array.

    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\n Enter the value for %d element : ", i + 1);
        scanf("%d", &ptr[i]);
        // taking input from the user.
    }

    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\nThe value for %d element  is : %d \n", i + 1, ptr[i]);
        // prints the result.
    }

    return 0;
}