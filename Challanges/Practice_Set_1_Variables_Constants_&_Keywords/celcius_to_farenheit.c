/**
 * @file celcius_to_farenheit.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-01
 * @copyright Copyright (c) 2022
 */
 
/* Write a Program to convert Celcius to Farenheit. */

#include <stdio.h>
int main()
{
    // main function

    printf("Convert Celcius to Farenheit!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    float celcius,farenheit;
    // declaring variable.

    printf("Enter the Celcius to coonvert in Farenheit : ");
    // taking input from the user.

    scanf("%f", &celcius);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    farenheit=(celcius * 9/5)+32;
    // formula of converting Celcius to Farenheit.

    printf("Celcius (%f) to Farenheit is : %f \n",celcius, farenheit);
    // performing the calculation of area of Circle.

    return 0;
}