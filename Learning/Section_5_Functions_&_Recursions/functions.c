/**
 * @file functions.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/* Program To Understand the concepts of Functions. */

/*
Functions are of two types :
    1. Library Functions      :- functions which are predefined in the system like printf, scanf, etc..
    2. User defined Functions :- functions which are declared and defined by the users like display, etc..
*/

#include <stdio.h>

void display();
// function prototype : it means we are making a function.

int main()
{
    // main function

    printf("\nConcepts Of Functions!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    printf("Initializing the display function.\n\n");

    display();
    // function calling : it means we are calling the function and it print what's inside the function.

    printf("Work of Display Function is finished.\n\n");

    return 0;
}

void display()
// function defination : it means we are defining what shoud be inside the function.
{
    printf("The Display Function Is Working!\n\n");
    // printing the result.
}
