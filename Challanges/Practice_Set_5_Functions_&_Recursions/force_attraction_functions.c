/**
 * @file force_attraction_functions.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/* Write a function to calculate force of attraction on a body of mass m exerted by earth (g = 9.8m/s^2). */

#include <stdio.h>

float force(int m);
// function prototype : it means we are making a function.
// force is a function which takes m as inpput and returns float as an output.

int main()
{
    // main function

    printf("\nCalculating Force of Attraction On a Body!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.
    int mass;
    // declearing variable.

    printf("Enter the value of mass : ");
    // taking input from the user.

    scanf("%d", &mass);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("On Calculating force of attraction on mass %d we get : %.2f \n", mass, force(mass));
    // printing the result.

    return 0;
}

float force(int m)
// here m is the parameters (it are placeholder in which we give values).
// function defination : it means we are defining what shoud be inside the function.
{
    int result;
    // declearing a variable.

    result = m * 9.8;
    // formula for calculating Force of Attraction on a body.

    return result;
}