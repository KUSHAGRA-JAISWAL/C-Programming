/**
 * @file fputc.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-29
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of fputc in the Files. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of fputc !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    FILE *ptr;
    // creating a pointer of type FILE.

    ptr = fopen("putcdemo.txt", "w");
    //  fopen is a function and it default takes two arguments one is the name of file and another is opeartion on it like r & w.
    //  here w is for write.

    putc('l', ptr);
    putc('e', ptr);
    putc('a', ptr);
    putc('r', ptr);
    putc('n', ptr);
    // here putc is use to write inside the file character by character.

    fclose(ptr);
    // fclose is a function to close the file , it will release the locked resource by it.

    return 0;
}