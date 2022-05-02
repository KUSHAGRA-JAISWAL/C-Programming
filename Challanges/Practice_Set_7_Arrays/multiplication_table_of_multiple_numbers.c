/**
 * @file multipliation_table_of_multiple_numbers.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-19
 * @copyright Copyright (c) 2022
 */

/* Write a program to create an array of size 3 x 10 contaning multiplication table of the numbers 2, 7, 9 respectively. */

#include <stdio.h>

void multiTable(int *mulTable, int num, int n)
// function defination..
{
    printf("The multiplication table of %d is : \n", num);
    // printing the message..

    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        mulTable[i] = num * (i + 1);
        // stores the result in array..
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d \n", num, i + 1, mulTable[i]);
        // printing the result.
    }

    printf("***********************************************\n\n");
    // printing the message..
}

int main()
{
    // main function

    printf("\n storing multiplication table of multiple numbers in array!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int mulTable[3][10];
    // creating 2D array of 3 x 10 .

    multiTable(mulTable[0], 2, 10);
    multiTable(mulTable[1], 7, 10);
    multiTable(mulTable[2], 9, 10);
    // function calling..

    return 0;
}