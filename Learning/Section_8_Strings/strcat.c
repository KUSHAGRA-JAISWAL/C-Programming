/**
 * @file strcat.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-21
 * @copyright Copyright (c) 2022
 */

/* Program to understand the Concept of strcat function in strings. */

#include <stdio.h>

#include<string.h>

int main()
{
    // main function

    printf("Concept of strcat in strings!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str[40] = "Hello";
    char *str2 = "kush";
    // creating string.

    strcat(str,str2);
    /*
    strcat
    
    this function is use to concatinate two strings

    char target[30] = "hello";

    char *source = "kush";

    strcat(target, source); => target now contains "hellokush"..

    there is no space between text while concatinating them.
    */

    printf("Now the str is : %s\n", str);
    // prints the result.

    return 0;
}