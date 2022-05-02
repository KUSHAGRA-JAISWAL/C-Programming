/**
 * @file find_average_functions.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/* Write a program using Functions to find average of three numbers. */

#include <stdio.h>

float average(int a, int b, int c);
// function prototype : it means we are making a function.
// average is a function which takes a, b, c as inpput and returns integer as an output.

int main()
{
    // main function

    printf("\nCalculating average using Functions!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int number_1, number_2, number_3;
    // declearing variables.

    printf("Enter the First number : ");
    // taking input from the user.

    scanf("%d", &number_1);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("Enter the Second number : ");

    scanf("%d", &number_2);

    printf("Enter the Third number : ");

    scanf("%d", &number_3);

    printf("The average of three numbers is : %f\n", average(number_1, number_2, number_3));
    // printing the result.

    return 0;
}

float average(int a, int b, int c)
// here a, b, c are the parameters (it are placeholder in which we give values).
// function defination : it means we are defining what shoud be inside the function.
{
    float result;
    // declearing variable.

    result = (a + b + c) / 3;
    // formula for calculating average of three numbers.

    return result;
}