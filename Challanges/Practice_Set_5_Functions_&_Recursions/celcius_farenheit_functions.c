/**
 * @file celcius_farenheit_functions.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/* Write a function to convert celcius into farenheit. */

#include <stdio.h>

int celcius_farenheit(int c);
// function prototype : it means we are making a function.
// celcius_farenheit is a function which takes c as inpput and returns int as an output.

int main()
{
    // main function

    printf("\nConverting Celcius to Farenheit using Functions!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int celcius;
    // declearing variable.

    printf("Enter the Celcius to convert in Farenheit : ");
    // taking input from the user.

    scanf("%d", &celcius);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("On Converting Celcius %d to Farenheit is : %d F\n", celcius, celcius_farenheit(celcius));
    // printing the result.

    return 0;
}

int celcius_farenheit(int c)
// here c is the parameters (it are placeholder in which we give values).
// function defination : it means we are defining what shoud be inside the function.
{
    int result;
    // declearing a variable.

    result = (c * 9 / 5) + 32;
    // formula for calculating Celcius to Farenheit.

    return result;
}