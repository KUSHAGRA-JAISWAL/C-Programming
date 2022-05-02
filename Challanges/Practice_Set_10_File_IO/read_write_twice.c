/**
 * @file read_write_twice.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-29
 * @copyright Copyright (c) 2022
 */

/* Write a Program to read the text file character by character and write its content twice in a seprate file. */

#include <stdio.h>

int main()
{
    // main function

    printf("Reading text file character by character & writing its content twice in a seprate file !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    FILE *ptr1;
    FILE *ptr2;
    // creating a pointer of type FILE.

    ptr1 = fopen("a.txt", "r");
    //  fopen is a function and it default takes two arguments one is the name of file and another is opeartion on it like r & w.
    //  here r is for read.

    ptr2 = fopen("b.txt", "w");
    //  here w is for write.

    char c = fgetc(ptr1);
    //  fgetc is use to read the file from character to character.

    while (c != EOF)
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        fputc(c, ptr2);
        fputc(c, ptr2);
        // here fputc is use to write inside the file character by character.
        // printing the result stored in c.

        c = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);
    // fclose is a function to close the file , it will release the locked resource by it.

    return 0;
}