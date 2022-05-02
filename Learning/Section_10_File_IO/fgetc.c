/**
 * @file fgetc.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-29
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of fgetc in the Files. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of fgetc !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    FILE *ptr;
    // creating a pointer of type FILE.

    ptr = fopen("getcdemo.txt", "r");
    //  fopen is a function and it default takes two arguments one is the name of file and another is opeartion on it like r & w.
    //  here r is for read.

    // char c = fgetc(ptr);
    //  fgetc is use to read the file from character to character.

    printf("The value of my character is : %c\n", fgetc(ptr));
    printf("The value of my character is : %c\n", fgetc(ptr));
    printf("The value of my character is : %c\n", fgetc(ptr));
    printf("The value of my character is : %c\n", fgetc(ptr));
    printf("The value of my character is : %c\n", fgetc(ptr));
    // prints the result.

    fclose(ptr);
    // fclose is a function to close the file , it will release the locked resource by it.

    return 0;
}