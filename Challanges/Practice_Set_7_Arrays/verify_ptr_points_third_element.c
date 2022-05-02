/**
 * @file verify_ptr_points_third_element.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-18
 * @copyright Copyright (c) 2022
 */

/* Write a program to create an array of 10 numbers. Vreify using pointer arthmetiic that (ptr+2)
 points to the third element where ptr is a pointer pointing to the first element of the array. */

#include <stdio.h>

int main()
{
    // main function

    printf("\nverify (ptr+2) points ptr!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int arr[10];
    // creating array of 10 numbers.

    int *ptr = &arr[0];
    // declaring pointer and storing the address of first element of the array.

    ptr = ptr + 2;
    // incrementing the value of ptr from 2.

    if(ptr == &arr[2])
    {
        // using if condition to check it is Even or Odd.

        printf("These points to the same location in the memory.\n");
        // printing the result.
    }
    else
    {
        // using else condition to throw a message if the condition is false.

        printf("These do not points to the same location in the memory.\n");
        // printing the result.
    }

    return 0;
}