/**
 * @file multidimensional_arrays.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-17
 * @copyright Copyright (c) 2022
 */

/* Program to Understand Concepts of Multidimensional Arrays like 2D array , 3d array. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of Multidimensional Arrays!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    /*
                  Multidimensional Arrays

    An array can be of 2 Dimnsion / 3 Dimension / n Dimensions.

    A 2 Dimensional array can be defined as

         int arr [3][2] = {
                            {1,4}
                            {7.9}
                            {11,22}
                          };

    We can accessthe elements of this array as arr [0][0] arr [0][1] & so on......
    */

    int n_students = 3;
    int n_subjects = 5;
    // declaring variables and storing values in it.

    int marks[3][5];
    // creating 2D array with 3 rows and 5 columns..

    for (int i = 0; i < n_students; i++)
    // for loop first initalize then test and then increment.
    // here 'i' is for the rows..
    {
        for (int j = 0; j < n_subjects; j++)
        // here 'j' is for the columns..
        {
            printf("\n Enter the marks of student %d in subject %d : ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
            // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
            // &=address, it indicates where to store the input given by the user.
        }
    }

    for (int i = 0; i < n_students; i++)
    // here 'i' is for the rows..
    {
        for (int j = 0; j < n_subjects; j++)
        // here 'j' is for the columns..
        {
            printf("The marks of student %d in subject %d is : %d\n", i + 1, j + 1, marks[i][j]);
            // printing the result..
        }
    }

    return 0;
}