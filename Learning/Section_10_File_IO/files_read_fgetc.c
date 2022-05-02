/**
 * @file files_read_fgetc.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-29
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of (END OF FILE)EOF & how to read the whole file using fgetc. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of EOF and reading whole file using fgetc !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    FILE *ptr;
    // creating a pointer of type FILE.

    char c;
    // declearing a variable.

    ptr = fopen("getcdemo.txt", "r");
    //  fopen is a function and it default takes two arguments one is the name of file and another is opeartion on it like r & w.
    //  here r is for read.

    c = fgetc(ptr);
    //  fgetc is use to read the file from character to character. 

    // EOF means End Of File, fgetc returns EOF when all the characters from the file have been read. 
    // so we can write a check below to detect the EOF.

    while (c != EOF)
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        printf("%c",c);
        // printing the result stored in c.

         c = fgetc(ptr);
    }
    
    fclose(ptr);
    // fclose is a function to close the file , it will release the locked resource by it.

    return 0;
}