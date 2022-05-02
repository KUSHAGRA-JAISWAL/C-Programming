/**
 * @file variables.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-01
 * @copyright Copyright (c) 2022
 */
 
/* Program to Understand the concepts of Variables. */
#include <stdio.h>
int main()
{
    // main function.

    int a = 10;
    // decleration of a variable which is integer type and we write int for declearing a integer.

    float b = 10.5;
    // decleration of a variable which is float type and we write float for delearing a float, it can store a decimal values.

    char c = 'C';
    // decleration of a variable which is character type and we write char for delearing a character, we can store only one value
    // and all character are declated in single quotes('').

    printf("Example of Variables!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("The Value of a is %d\n", a);
    // %d is used to format the output in C programming language.
    // If we want to print an integer, we use %d. It is called a format specifier.

    printf("The Value of b is %f\n", b);
    // %f is called as the format specifier or the control string for the float datatype values.

    printf("The Value of c is %c\n", c);
    // %c reads a single character from the input stream and stores it to a single char object.

    return 0;
}