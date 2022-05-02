 /**
 * @file area_of_circle.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-01
 * @copyright Copyright (c) 2022
 */
 
 /* Write a Program to take input from the user and calculate the area of the Circle. */

#include <stdio.h>
int main()
{
    // main function

    printf("Area of Circle!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int radious;
    // declaring variable.

    float pie = 3.14;
    // declaring variable and storing a value in it.

    printf("Enter the Radious of the Circle : ");
    // taking input from the user.

    scanf("%d", &radious);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

     printf("Area of Circle is : %f \n", pie*radious*radious);
    // performing the calculation of area of Circle.

    return 0;
}