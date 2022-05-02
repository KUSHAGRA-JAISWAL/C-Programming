/**
 * @file user_made_strlen.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-21
 * @copyright Copyright (c) 2022
 */

/* Write a Program to Create your own version of strlen function from <string.h>. */

#include <stdio.h>

int stringLength(char *str)
// function defination
{
    char *ptr = str;
    // creating string and storing value of str in it.

    int length = 0;
    // declearing a variable and storing values in it.

    while (*ptr != '\0')
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        length++;
        ptr++;
        // incremeanting its value from 1.
    }
    return length;
}

int main()
{
    // main function

    printf("user created strlen function!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str[] = "KUSH";
    // creating string.

    int l = stringLength(str);
    // function calling 

    printf("The length of this string is : %d\n", l);
    // prints the result.

    return 0;
}