/**
 * @file strings_basic.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-20
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of Strings. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of Strings!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    /*******Strings******/

    /*
    A string is a 1-D character array terminated by null ('\0').

    null character is use to denote string termination
    characters are stored in contiguous memory location..
    */

    /*****Initializing Strings******/

    //Scince string is an array of characters, it can be initialized as follows:

    char str[] = {'K', 'U', 'S', 'H', '\0'};
    // initializing string

    // There is another shortcut for initializing string in C langiage.

    char str2[] = "kush";
    // initializing string, in this case C adds a null character automatically..
    
    return 0;
}