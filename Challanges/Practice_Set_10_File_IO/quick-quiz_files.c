/**
 * @file quick_quiz_files.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-29
 * @copyright Copyright (c) 2022
 */

/* Write a Program to check whether the file exists or not before opeaning the file. */

#include <stdio.h>

int main()
{
    // main function

    printf("Check File Existence Before Oprening !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    FILE *ptr;
    // creating a pointer of type FILE.

    int num, num2;
    /// creating a variable.

    ptr = fopen("learn.txt", "r");
    //  fopen is a function and it default takes two arguments one is the name of file and another is opeartion on it like r & w.
    //  here r is for read.

    if (ptr == NULL)
    // using if statement to check the condition
    {
        printf("This file does not exist");
        // print the result.
    }

    else
    {

        fscanf(ptr, "%d", &num);
        // fscanf() is a function, This will read an integer from file in num variable.

        fscanf(ptr, "%d", &num2);

        fclose(ptr);
        // fclose is a function to close the file , it will release the locked resource by it.

        printf("The value of num is : %d\n", num);
        printf("The value of num2 is : %d\n", num2);
        // prints the result.
    }

    return 0;
}