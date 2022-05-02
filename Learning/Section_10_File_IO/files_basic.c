/**
 * @file files_basic.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-28
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of Files I/O. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of Files I/O !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    /************* FILE I/O **************/

    /*
    The Random Access Memory (RAM) is volatile and its content is lost once the program terminates.
    IN Order to persist the data forever we use files.

    A File is a data stored in the storage devices.
    A C program can talk to the files by reading content from it and writing content to it.

    FILE POINTER

    A FILE is a structure which needs to be created for opeaning the file.
    A file pointer is pointer to the structure of the file.

                    FILE POINTER is neede for
                    communication between the
                    file and the program.

    A FILE pointer can be Creeated as follows:

       FILE *ptr;

       ptr = fopen("filename.txt","mode");

    Types of FILES

    1. text fies (.txt)
    2. Binary files (.jpg, .dat)
    */

    FILE *ptr;
    // creating a pointer of type FILE.

    // ptr = fopen("simple.txt","r");
    //  fopen is a function and it default takes two arguments one is the name of file and another is opeartion on it like r & w.
    //  here r is for read.

    ptr = fopen("simple.txt", "w");
    // here w is for write.
    // at a time we can only use one of them.

    /*
    FILE opeaning modes in C.

    C affects a programmner to select the mode for opeaning a file.
    Following modes are primarly used in C FILE I/O.

        "r" ----------------> open for reading \
                                                > If the file does not exist fopen returns NULL. 
        "rb" ---------------> open for reading /
                                in binary.         

        "w" ----------------> open for writting \
                                                 > If the file exists, the contents will be overwritten.
        "wb" ---------------> open for writting /
                                in binary.    
                        
        "a" ----------------> open for append ---> If the file does not esists, it will be created.

        append :- it means adding the content to the end of the file. 
    */
    return 0;
}