/**
 * @file strlen.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-20
 * @copyright Copyright (c) 2022
 */

/* Program to understand the Concept of Strlen function in strings. */

#include <stdio.h>

#include<string.h>

int main()
{
    // main function

    printf("Concept of Strlen in strings!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char *str = "kush";
    // creating string.

    printf("The given string is : %s\n", str);
    // prints the string.

    int a = strlen(str);
    // by using strlen function we can find the length of the string excluding the null character.

    printf("The length of the string is : %d\n", a);
    // prints the result

    return 0;
}