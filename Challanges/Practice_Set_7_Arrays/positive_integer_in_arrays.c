/**
 * @file positive_integer_in_arrays.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-19
 * @copyright Copyright (c) 2022
 */

/* Write a program containing a function which count the number of positive integers in an arrays. */

#include <stdio.h>

void positiveInteger(int *ptr, int n)
// function with arguments
{
    int count = 0;
    // declearing a variable and storing values in it..

    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        printf("The value of element arr[%d] is : %d\n", i, *(ptr + i));
        // here *(ptr + i) points the address of the elements..

        if (ptr[i] >= 0)
         // using if condition 
        {
            count ++;
            // incrementing the value..
        }
    }
    
    printf("The Total number of positive integers in array is : %d\n", count);
    // printing the result..
}

int main()
{
    // main function

    printf("\n Find the total positive integer in array!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int n;
    // declaring a variable.

    printf("\n write the total size of the array : ");
    scanf("%d", &n);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    int arr[n];
    // creating array..

    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\n write the value for arr[%d] at first position : ", i);
        scanf("%d", &arr[i]);
        // taking input to from the user to store in array..
    }

    positiveInteger(arr, n);
    // function calling..

    return 0;
}