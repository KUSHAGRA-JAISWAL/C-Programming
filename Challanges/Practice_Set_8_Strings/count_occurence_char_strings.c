/**
 * @file count_occurence_char_strings.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-22
 * @copyright Copyright (c) 2022
 */

/* Write a Program to count the occurence of a given character in string. */

#include <stdio.h>

int occurences(char *str, char c)
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
        if (*ptr ==c)
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

    printf("count the occurence of given character in string!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str[30] = "KUSHAGRA JAISWAL";
    // creating string.

    int count = occurences(str, 'A');
    // function calling

    printf("The Occurences is : %d\n", count);
    // prints the result.

    return 0;
}