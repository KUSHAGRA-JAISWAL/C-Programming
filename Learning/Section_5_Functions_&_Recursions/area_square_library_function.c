/**
 * @file area_square_library_function.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/* Program to calculate area of square using library function. */

#include <stdio.h>
#include <math.h>
int main()
{
    // main function

    printf("\nCalculate Area of Square Using Library Function!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int side;
    // declearing a variable.

    printf("Enter a Number to Calculate Area Of Square : ");
    // taking input from the user.

    scanf("%d", &side);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("The Value of Area is : %f\n", pow(side,2));
    // here we use %f because the pow function returns value in float and double.
    // printing the result.

    return 0;
}