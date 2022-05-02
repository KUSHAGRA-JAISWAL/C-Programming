/**
 * @file simple_intrest.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-01
 * @copyright Copyright (c) 2022
 */
 
/* Write a Program to calculate Sinple Intrest. */

#include <stdio.h>
int main()
{
    // main function

    printf("Calculate Simple Intrest!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int principal,rate,years,simple_intrest;
    // declaring variables.

    printf("Enter the Principal Amount : ");
    // taking input from the user.

    scanf("%d", &principal);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

     printf("Enter the Rate of Intrest : ");

     scanf("%d", &rate);

      printf("Enter the Years : ");

      scanf("%d", &years);

    simple_intrest=(principal*rate*years)/100;
    // formula of converting Simple Intrest.

    printf("Simple Intrest is : %d \n",simple_intrest);
    // performing the calculation of Simple Intrest.

    return 0;
}