/**
 * @file convenient_way_print_strings.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-20
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concept of printing the string in convenient way. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of Printing Strings in convenient way!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char *ptr = "Kush";
    // creating string..

    printf("%s \n", ptr);
    // printing the result, (%s) is the format specifier of string.
    return 0;
}
