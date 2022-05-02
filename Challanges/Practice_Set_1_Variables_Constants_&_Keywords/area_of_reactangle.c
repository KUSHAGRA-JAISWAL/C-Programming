/**
 * @file area_of_rectangle.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-01
 * @copyright Copyright (c) 2022
 */
 
/* Write a Program to take input from the user and calculate the area of the Reactangle. */

#include <stdio.h>
int main()
{
    // main function

    printf("Area of Rectangle!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int length, breadth;
    // declaring variables.

    printf("Enter the Length of the Reactangle : ");
    // taking input from the user.

    scanf("%d", &length);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("Enter the Breadth of the Reactangle : ");

    scanf("%d", &breadth);

     printf("Area of Rectangle is : %d \n", length * breadth);
    // performing the calculation of area of Rectangle.

    return 0;
}