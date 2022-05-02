/**
 * @file sum_natural_functions.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/* Write a Program using recurrison to calculate sum of first n natural numbers. */

#include <stdio.h>

int natural_number(int n);
// function prototype : it means we are making a function.
// natural_number is a function which takes n as input and returns integer as an output.

int main()
{
    // main function

    printf("\nCalculating Sum of First natural Numbers using recurrison!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int input;
    // declearing variable.

    printf("Enter a number till you want to sum natural numbers : ");
    // taking input from the user.

    scanf("%d", &input);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("The sum of Natural numbers till %d is %d .\n", input, natural_number(input));
    // printing the result.
    // function calling : it means we are calling the function and it print what's inside the function.

    return 0;
}

int natural_number(int n)
// here n is a parameters (it are placeholder in which we give values).
// function defination : it means we are defining what shoud be inside the function.
{
    // printf("Calculating fibonacci(%d)\n", f);
    // prints step by step execution of function.

    if (n == 0)
    // if is use to chek the condition.
    {
        return 0;
        // we are returning 0 because sum of 0 is 0.
    }
    
    else
    // using else condition to throw a message if the condition is false.
    {
        return natural_number(n-1) + n ;
        // formula of calculating sum of First n natural numbers.
    }
}
