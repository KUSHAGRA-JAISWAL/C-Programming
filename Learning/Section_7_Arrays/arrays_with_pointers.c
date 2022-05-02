/**
 * @file arrays_with_pointers.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-16
 * @copyright Copyright (c) 2022
 */

/* Program to Understand Concepts of taking input and output using pointers in Arrays. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of Taking input using pointers in arrays!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int marks[5];
    // Creating an array of size 5.

    int *ptr = &marks[0];
    // declaring a variable type of pointer and storing the address of the first element of the array.

    for (int i = 0; i < 5; i++)
    // for loop first initalize then test and then increment.
    {
        printf("Enter the marks of student %d : ", i + 1);
        scanf("%d", ptr);
        // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
        // &=address, it indicates where to store the input given by the user.
        ptr++;
        //incrementing the value
    }

    for (int i = 0; i < 5; i++)
    // for loop first initalize then test and then increment.
    {
        printf("The marks of the student %d is : %d \n", i + 1, marks[i]);
        // printf("%d\n",marks[5]);
        // printing the marks stored in arrays using pointers...
    }

    return 0;
}