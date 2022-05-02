/**
 * @file volume_of_cylinder.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-01
 * @copyright Copyright (c) 2022
 */
 
/* Write a Program to find the volume of the Cylinder. */

#include <stdio.h>
int main()
{
    // main function

    printf("Volume of Cylinder!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int radious, height;
    // declaring variables.

    float pie = 3.14;
    // declaring variable and storing a value in it.

    printf("Enter the Radious of the Cylinder : ");
    // taking input from the user.

    scanf("%d", &radious);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("Enter the Height of the Cylinder : ");

    scanf("%d", &height);

    printf("Volume of Cylinder is : %f \n", pie * radious * radious * height);
    // performing the calculation of area of Circle.

    return 0;
}