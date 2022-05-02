/**
 * @file quick_quiz_2D_arrays.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-18
 * @copyright Copyright (c) 2022
 */

/* Write a program to create a 2D array by taking input from the user.
Write a Display function to print the content of 2D array on screen */

#include <stdio.h>

int main()
{
    // main function

    printf("2D array input and output on screen!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int student, subject;
    // declaring variables

    int marks[student][subject];
    // creating 2D array

    printf("\nEnter the total number of students : ");
    scanf("%d", &student);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.
    
    printf("\nEnter the total number of subjects : ");
    scanf("%d", &subject);

    for (int i = 0; i < student; i++)
    // for loop first initalize then test and then increment.
    // here 'i' is for the rows..
    {
        for (int j = 0; j < subject; j++)
        // here 'j' is for the columns..
        {
            printf("\n Enter the marks of student %d in subject %d : ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < student; i++)
    // here 'i' is for the rows..
    {
        for (int j = 0; j < subject; j++)
        // here 'j' is for the columns..
        {
            printf("\nThe marks of student %d in subject %d is : %d\n", i + 1, j + 1, marks[i][j]);
            // printing the result..
        }
    }

    return 0;
}