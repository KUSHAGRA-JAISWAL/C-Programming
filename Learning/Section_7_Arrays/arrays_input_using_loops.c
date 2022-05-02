/**
 * @file arrays_input_using_loops.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-16
 * @copyright Copyright (c) 2022
 */

/* Program to Understand How to take input from the user in arrays with the help of loops and display output. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of Taking input form the user in Arrays with the help of loops!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int marks[5];
    // Creating an array of size 5.

    for (int i = 0; i < 5; i++)
    // for loop first initalize then test and then increment.
    {
        printf("Enter the marks of student %d : ", i + 1);
        scanf("%d", &marks[i]);
        // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
        // &=address, it indicates where to store the input given by the user.
    }

    for (int i = 0; i < 5; i++)
    // for loop first initalize then test and then increment.
    {
        printf("The marks of the student %d is : %d \n", i+1, marks[i]);
        // printf("%d\n",marks[5]);
        // printing the marks stored in arrays...
    }

    return 0;
}
