/**
 * @file strcmp.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-21
 * @copyright Copyright (c) 2022
 */

/* Program to understand the Concept of strcmp function in strings. */

#include <stdio.h>

#include<string.h>

int main()
{
    // main function

    printf("Concept of strcmp in strings!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str[40] = "Hello";
    char *str2 = "kush";
    // creating string.

    int val = strcmp(str,str2);
    /*
    strcmp
    
    this function is use to compare two strings
    it returns 0 if strings are equal

    Negative value if first string's mismatching character's ASCII value is not grater then second string's
    corresponding mismatching character. it returns positive value otherwise.
    */

    printf("Now the val is : %d\n", val);
    // prints the result.

    return 0;
}