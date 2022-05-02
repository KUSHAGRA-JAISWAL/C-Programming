/**
 * @file char_in_string_or_not.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-22
 * @copyright Copyright (c) 2022
 */

/* Write a Program to check whether a given character is in the string or not. */

#include <stdio.h>

int charString(char *str, char c)
// function defination
{
    char *ptr = str;
    // creating string and storing value of str in it.

    int count = 0;
    // declearing a variable and storing its value.

    while (*ptr != '\0')
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        if (*ptr == c)
        // using if condition
        {
            count++;
            // incremeanting its value.
        }
        ptr++;
        // incremeanting its value.
    }
    return count;
}

int main()
{
    // main function

    printf("Given character in string or not!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str[30] = "KUSHAGRA JAISWAL";
    // creating string.

    int count = charString(str, 'B');
    // function calling

    if (count > 0)
    {
        printf("The given Character is in the string\n");
        // prints the result
    }
    else
    {
        printf("The given Character is Not in the string\n");
        // prints the result
    }

    return 0;
}