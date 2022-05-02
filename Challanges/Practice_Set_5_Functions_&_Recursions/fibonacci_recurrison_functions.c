/**
 * @file fibonacci_recurrison_functions.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/* Write a Program using recurrison to calculate n th element of fibonacci series. */

#include <stdio.h>

int fibonacci(int f);
// function prototype : it means we are making a function.
// fibonacci is a function which takes f as input and returns integer as an output.

int main()
{
    // main function

    printf("\nCalculating Fibonacci series using recurrison!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    /*
    Fibonacci series

    example : 0, 1, 1, 2, 3, 5, 8,......n

    here as we can see by adding 0+1 we get 1 and 1+1 we get 2 and 1+2 we get 3....
    this is known as fibonacci.
    */

    int input;
    // declearing variable.

    printf("Enter a number till you want to calcualte fibonacci : ");
    // taking input from the user.

    scanf("%d", &input);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("The Fibonacci series till %d is %d .\n", input, fibonacci(input));
    // printing the result.
    // function calling : it means we are calling the function and it print what's inside the function.

    return 0;
}

int fibonacci(int f)
// here x is a parameters (it are placeholder in which we give values).
// function defination : it means we are defining what shoud be inside the function.
{
    // printf("Calculating fibonacci(%d)\n", f);
    // prints step by step execution of function.

    if (f == 0 || f == 1)
    // if is use to chek the condition.
    {
        return 0;
        // we are returning 0 because fibonacci of 0 and 1 is 0.
    }
    if (f == 2)
    // if is use to chek the condition.
    {
        return 1;
        // we are returning 1 because fibonacci of 2 is 1.
    }
    else
    // using else condition to throw a message if the condition is false.
    {
        return fibonacci(f - 1) + fibonacci(f - 2) ;
        // formula of calculating fibonacci.
    }
}
