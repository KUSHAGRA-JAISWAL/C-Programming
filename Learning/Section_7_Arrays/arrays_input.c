/**
 * @file arrays_input.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-16
 * @copyright Copyright (c) 2022
 */

/* Program to Understand Concepts of taking input from the user in arrays and display output. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of Taking input form the user in Arrays!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int marks[4];
    // Creating an array of size 4.

    printf("Enter the marks of student 1 : ");
    scanf("%d", &marks[0]);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("Enter the marks of student 2 : ");
    scanf("%d", &marks[1]);

    printf("Enter the marks of student 3 : ");
    scanf("%d", &marks[2]);

    printf("Enter the marks of student 4 : ");
    scanf("%d", &marks[3]);

    // Taking input form the user and storing into arrays.


    printf("The marks of the student entered by the user are %d %d %d and %d\n", marks[0], marks[1], marks[2], marks[3]);
    // printing the values enterd by the user which is stored in arrays

    return 0;
}