/**
 * @file arrays_to_functions.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-16
 * @copyright Copyright (c) 2022
 */

/* Program to Understand Concepts of passing the array to the function. */

#include <stdio.h>

void printArray(int *ptr, int n)
// function with arguments
{
    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        printf("the value of element %d is : %d\n", i + 1, *(ptr + i));
        // here *(ptr + i) points the address of the elements..
    }
}

int main()
{
    // main function

    printf("Concepts of passing array to the function!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int arr[] = {23,22,21,11,12,25};
    // declaring a varible type of array and storing values in it.

    printArray(arr,6);
    // printing the values stored in arrays..

    return 0;
}