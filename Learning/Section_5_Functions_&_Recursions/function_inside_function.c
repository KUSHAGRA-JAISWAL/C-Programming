/**
 * @file function_inside_function.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/*
Program to Understand the Concepts of Functions insdie the Function.

    Write a program with three functions :
    1. Good Morning function which prints "Good Morining".
    2. Good Afternoon function which prints "Good Afternoon".
    3. Good Night function which prints "Good Night".
*/

#include <stdio.h>
void good_morning();
// function prototype : it means we are making a function.

void good_afternoon();

void good_night();

int main()
{
    // main function

    printf("\nConcepts of Function Inside a Function!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    good_morning();
    // function calling : it means we are calling the function and it print what's inside the function.
    // here we are calling 1 function and inside it there will be another function.

    return 0;
}

void good_morning()
// function defination : it means we are defining what shoud be inside the function.
{
    printf("Good Morning!\n\n");
    // printing the result.

    good_afternoon();
    // calling function inside a function.
}
void good_afternoon()

{
    printf("Good Afternoon!\n\n");

    good_night();
    // calling function inside a function.
}
void good_night()

{
    printf("Good Night!\n\n");
}
