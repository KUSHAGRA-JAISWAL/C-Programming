/**
 * @file arrays_basic.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-12
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of Arrays. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of Arrays!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    // Naive way to create 4 ints

    int marks1, marks2, marks3, marks4;
    // declearing variables

    marks1 = 34;
    marks2 = 65;
    marks3 = 47;
    marks4 = 87;
    // storing values in it

    printf("Stored in variables\n");

    printf("%d\n", marks1);
    printf("%d\n", marks2);
    printf("%d\n", marks3);
    printf("%d\n", marks4);
    // printing the marks..

    /*********  Arrays  ***********/

    /*
    An Array is a collection of similar elements

    one variable => capabale of storing multiple values

    Syntax

    The syntax of declearing an array looks like

    int marks[90]        => integer array
    char name[20]        => character array or string
    float percentile[90] => float array

    It is very important to note that array index start from zero 0.
    */

    printf("-------------------------\n");
    // for some spacing in terminal.

    int marks[4];
    // Creating an array of size 4.

    marks[0] = 34;
    marks[1] = 65;
    marks[2] = 47;
    marks[3] = 87;
    // Storing values in Arrays.

    printf("Stored in Arrays\n");

    printf("The marks of the student are %d %d %d and %d\n", marks[0], marks[1], marks[2], marks[3]);
    // printing the values stored in arrays
    
    return 0;
}