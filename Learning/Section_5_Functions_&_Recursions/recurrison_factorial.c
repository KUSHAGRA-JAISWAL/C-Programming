/**
 * @file recurrison.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of recurrison. */

#include <stdio.h>

int factorial(int x);
// function prototype : it means we are making a function.
// factorial is a function which takes x as input and returns integer as an output.

int main()
{
    // main function

    printf("\nConcepts of Recurrison!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    /*
    Recurrison

    A Function defined in C can call itself this is called recurrsion.

    A Function calling itself is also called recurrsive function.
    */

    int input;
    // declearing variable.

    printf("Enter a number to find its factorial : ");
    // taking input from the user.

    scanf("%d", &input);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("The Factorial of %d is %d \n", input, factorial(input));
    // printing the result.
    // function calling : it means we are calling the function and it print what's inside the function.

    return 0;
}

int factorial(int x)
// here x is a parameters (it are placeholder in which we give values).
// function defination : it means we are defining what shoud be inside the function.
{
    printf("Calling factorial(%d)\n", x);
    // prints step by step execution of function.

    if (x == 1 || x == 0)
    // if is use to chek the condition.
    {
        return 1;
        // we are returning 1 because factorial of 1 and 0 is 1.
    }
    else
    // using else condition to throw a message if the condition is false.
    {
        return x * factorial(x - 1);
        // formula of calculating factorial.

        /*
        How does it work?

        lets see if i have to calculate factorial 5 then  according to the formula:-

        factorial(5)
            /      \
          /         \
        5   x  factorial(4)
                /      \
        5  x  4  x factorial(3)
                       /    \
        5  x  4  x   3  x  factorial(2)
                             /   \
        5  x  4  x   3  x   2  x factorial(1)
                                    |
        5  x  4  x   3  x   2  x   1

        */
    }
}
