/**
 * @file reverse_arrays_through_functions.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-18
 * @copyright Copyright (c) 2022
 */

/* Write a program containing a function which reverses the array pass to it. */

#include <stdio.h>

int main()
{
    // main function

    void reverse(int *arr, int n)
    // defining a function..
    {
        int temp;
        // devlearing a variable and storing values in it..

        for (int i = 0; i < (n/2); i++)
        // for loop first initalize then test and then increment.
        {
            temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = temp;
            // logic to reverse the array
        }
    }
    printf("\n reverse array through function!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int arr[] = {1, 2, 3, 4, 5, 6};
    // creating array and storing values in it.

    reverse(arr, 6);
    // funtion calling.

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is : %d\n", i, arr[i]);
        // printing the result.
    }

    return 0;
}