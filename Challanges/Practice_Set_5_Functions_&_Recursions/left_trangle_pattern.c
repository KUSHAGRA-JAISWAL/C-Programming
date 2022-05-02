/**
 * @file left_trangle_pattern.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-01
 * @copyright Copyright (c) 2022
 */

/* Write a Program using function to print a left angle trangle pattern. */

#include <stdio.h>

void pattern(int s);
// function prototype : it means we are making a function.
// pattern is a function which takes s as input and returns integer as an output.
int main()
{
    // main function

    printf("\nPrinting the Left Trangle Pattern!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int number;
    // declaring variable.

    printf("Enter the number to print Left Trangle pattern : ");
    // taking input from the user.

    scanf("%d", &number);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    pattern(number);
    // function calling : it means we are calling the function and it print what's inside the function.

    return 0;
}

void pattern(int s)
// here xs is a parameters (it are placeholder in which we give values).
// function defination : it means we are defining what shoud be inside the function.
{
    if (s == 1)
    // if is use to check the condition.
    {
        printf("*\n");
        // printing the result.

        return;
    }

    // for s = 3
    //*
    //***
    //*****

    // for 1 we need 1 star
    // for 2 we need 3 star
    // for 3 we need 3 star

    // so the formula will be (2*s -1)

    pattern(s - 1);

    for (int i = 0; i < (2 * s - 1); i++)
    // for loop first initalize then test and then increment.
    {
        printf("*");
        // print result as per condition.
    }

    printf("\n");
}