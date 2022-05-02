/**
 * @file files_reading.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-28
 * @copyright Copyright (c) 2022
 */

/* Program to Understand the concepts of Reading the Files. */

#include <stdio.h>

int main()
{
    // main function

    printf("Concepts of Files Reading !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    /*
   Let us assume that "learnC.txt" contains a integer.
   We can read that integer using:

   fscanf(ptr, "%d", &num); => fscanf() is a file
   This will read an integer from file in num variable.
   */

    FILE *ptr;
    // creating a pointer of type FILE.

    int num, num2;
    /// creating a variable.

    ptr = fopen("learnC.txt", "r");
    //  fopen is a function and it default takes two arguments one is the name of file and another is opeartion on it like r & w.
    //  here r is for read.

    fscanf(ptr, "%d", &num); 
    // fscanf() is a function, This will read an integer from file in num variable.

    fscanf(ptr, "%d", &num2); 

    fclose(ptr);
    // fclose is a function to close the file , it will release the locked resource by it. 

    printf("The value of num is : %d\n", num);
    printf("The value of num2 is : %d\n", num2);
    // prints the result.

    return 0;
}