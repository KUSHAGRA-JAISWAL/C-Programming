/**
 * @file user_input_strings.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-20
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concept of taking input fron the users in strings. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concept of taking input from the user in strings!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str[30];
    // creating string..

    printf("Enter your name : ");
    scanf("%s", str);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%s" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("Your name is %s\n", str);
    // pprinting the result..
    
    return 0;
}