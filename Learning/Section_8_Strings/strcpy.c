/**
 * @file strcpy.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-21
 * @copyright Copyright (c) 2022
 */

/* Program to understand the Concept of Strcpy function in strings. */

#include <stdio.h>

#include<string.h>

int main()
{
    // main function

    printf("Concept of strcpy in strings!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char *str = "kush";
    char str2[40];
    // creating string.

    strcpy(str2,str);
    /*
    strcpy 
    
    this function is use to copy the content of second string into the first string pass to it.

    char source[] = "kush";

    char target[30];

    strcpy(target, source); => target now contains "kush"..

    target string should have enough capicity to store the source string.
    */

    printf("Now the str2 is : %s\n", str2);
    // prints the result.

    return 0;
}