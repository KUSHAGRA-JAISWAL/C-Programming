/**
* @file factorial.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-07
* @copyright Copyright (c) 2022
*/

/* Write  a Program to calculate the factorial of a given number using for loop. */

#include <stdio.h>
int main()
{
    // main function

    printf("Calculate Factorial!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int number;
    int factorial = 1;
    // declearing variables and storing values in it.

    /*
    Example of Factorial:-

    Factorial of (4) is 1 * 2 * 3 * 4
    Factorial of (6) is 1 * 2 * 3 * 4 * 5 * 6
    */

    printf("Enter the Number to Calculate Factorial : ");
    // taking input from the user.

    scanf("%d", &number);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    for ( int i = 1; i <= number; i++)
    // for loop first initalize then test and then increment.
    {
        factorial *= i;
        // it will multiply i everytime and store in factorial.
    }

    printf("Factorial of %d  is : %d \n", number, factorial);
    // printing the result.

    return 0;
}