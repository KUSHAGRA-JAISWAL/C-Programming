/**
 * @file sum_average_using_pointers.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-12
 * @copyright Copyright (c) 2022
 */

/* Write a Program using a function which calculates the sum and average of two numbers.
   Use pointers and print the value of sum and average in main(). */

#include <stdio.h>

void sum_average(int a, int b, int *sum, float *average)
// function prototype : it means we are making a function.
// function defination : it means we are defining what shoud be inside the function.
{
    *sum = a + b;
    *average = (float)(*sum) / 2;
    // formulas for calculation.
    // it will give integer value thats why we typecast float with it.
}

int main()
{
    // main function

    printf("Sum and Average using Pointers & Function!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    int sum;
    float average;
    // declearig variables.

    int x = 5;
    int y = 10;
    // declearing variables and storing values in it.

    sum_average(x, y, &sum, &average);
    // function calling : it means we are calling the function and it print what's inside the function.

    printf("The sum of x and y is : %d\n", sum);
    // prints the sum.

    printf("The average of x and y is : %f\n", average);
    // pritns the average.

    return 0;
}