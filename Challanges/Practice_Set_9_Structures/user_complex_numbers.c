/**
 * @file user_complex_numbers.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-24
 * @copyright Copyright (c) 2022
 */

/* Write a Program, create an array of 5 complex numbers with the help of structures and display them with the display function.
The value must be take as input from the user. */

#include <stdio.h>

#include <string.h>

typedef struct complex
{
    int real;
    int complex;
} cmp;
// creating a structure which is custom datatype, using typedef to give an alias to it.

void display(cmp c)
// function decleration & defination
{
    printf("The value of real part is : %d\n", c.real);
    printf("The value of complex part is  : %d\n", c.complex);
    // prints the result..
}

int main()
{
    // main function

    printf("Printing Complex Numbers by user in Structures!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    cmp cnums[5];
    // an array of structures..

    for (int i = 0; i < 5; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\nEnter the real value for %d num :  ", i + 1);
        scanf("%d", &cnums[i].real);
        // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
        // &=address, it indicates where to store the input given by the user.

        printf("\nEnter the complex value for %d num :  ", i + 1);
        scanf("%d", &cnums[i].complex);
        // taking input from the user.
    }

    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
        // function calling..
    }

    return 0;
}