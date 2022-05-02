/**
 * @file slice_strings.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-21
 * @copyright Copyright (c) 2022
 */

/* Write a function slice(). to slice the string. It should change the original string such that
it is now the sliced string. Take m and n as the start and the ending position of the slice. */

#include <stdio.h>

void slice(char *str, int m, int n)
// function defination
{
    int i = 0;
    // declearing a variable and storing values in it.

    while ((m + i) < n)
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        str[i] = str[i + m];
        // it will store the value of given position.

        i++;
        // incremeanting the value
    }
    str[i] = '\0';
    // it will store the end value after while loop.
}

int main()
{
    // main function

    printf("slice a string!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str[] = "KUSH";
    // creating string.

    slice(str,1,4);
    // function calling

    printf("The string after slicing is : %s\n", str);
    // prints the result.

    return 0;
}