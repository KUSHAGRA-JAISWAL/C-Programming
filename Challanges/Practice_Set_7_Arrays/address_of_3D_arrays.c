/**
 * @file address_of_3D_arrays.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-19
 * @copyright Copyright (c) 2022
 */

/* Write a program to create a three dimensional array and print the address of its elements in increasing order. */

#include <stdio.h>

int main()
{
    // main function

    printf("\n Printing the address of the elements of three dimensional array!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int arr[2][3][4];
    // creating a 3D array..

    for (int i = 0; i < 2; i++)
    // for loop first initalize then test and then increment.
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("\n The address of arr[%d][%d][%d] is : %p \n ", i, j, k, &arr[i][j][k]);
                // prints the address of elements in increasing order..
            }
        }
    }

    return 0;
}