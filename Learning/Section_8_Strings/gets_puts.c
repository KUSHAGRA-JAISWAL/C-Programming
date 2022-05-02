/**
 * @file gets_puts.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-20
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concept of gets() and puts() in strings. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concept of gets() and puts() in strings!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str[30];
    // creating string..

    printf("Enter your name : ");
    gets(str);
    // here gets() is a function which can be use to receive a multi-words string.

    printf("Your name is %s\n", str);
    // pprinting the result..

    puts(str);
    // here puts() prints the string and places the cursor on the next line.
    
    return 0;
}

