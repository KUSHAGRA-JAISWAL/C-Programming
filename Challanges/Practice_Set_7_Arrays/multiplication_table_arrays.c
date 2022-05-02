/**
 * @file multipliation_table_arrays.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-18
 * @copyright Copyright (c) 2022
 */

/* Write a program to create an array of 10 integers and store multiplication table of 5 in it. */

#include <stdio.h>

int main()
{
    // main function

    printf("\nstoring multiplication table of 5 in array!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int multiplication[10];
    // creating array of 10 numbers.

     for (int i = 0; i < 10; i++)
    // for loop first initalize then test and then increment.
    {
        multiplication[i] = 5*(i+1);
        // stores the result in array..
    }

     for (int i = 0; i < 10; i++)
    {
        printf("5 X %d = %d \n", i+1, multiplication[i]);
        //printing the result.
    }
    return 0;
}