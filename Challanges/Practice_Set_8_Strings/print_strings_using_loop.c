/**
 * @file print_strings_using_loop.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-20
 * @copyright Copyright (c) 2022
 */

/* Write a Program Create a string using " "  and print it content using loop. */

#include <stdio.h>

int main()
{
    // main function

    printf("Print Strings using loop!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str[] = "KUSH";
    // creating string.

    char *ptr = str;
    // creating pointer anddd storing values in it

    while (*ptr != '\0')
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        printf("%c", *ptr);
        // printing the result

        ptr++;
        // incremeanting its value from 1.
    }

    return 0;
}