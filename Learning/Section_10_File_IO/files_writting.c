/**
 * @file files_writting.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-29
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of Wrritting the Files. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of Files Writting !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    // this program will create a new file and write the text from this program into new created text file by the program.

    FILE *fptr;
    // creating a pointer of type FILE.

    int number = 45;
    // creating a variable and storing values in it.

    fptr = fopen("generated.txt", "w");
    //  fopen is a function and it default takes two arguments one is the name of file and another is opeartion on it like r & w.
    //  here w is for write.

    fprintf(fptr, "The number is : %d\n", number);
    fprintf(fptr, "Thanks for using fprintf.");
    // fprintf() is a function, This will write into file from the program.

    fclose(fptr);
    // fclose is a function to close the file , it will release the locked resource by it.

    return 0;
}