/**
 * @file read_three_integer.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-29
 * @copyright Copyright (c) 2022
 */

/* Write a Program to read three integer from the file. */

#include <stdio.h>

int main()
{
    // main function

    printf("Read three integer from file!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    FILE *ptr;
    // creating a pointer of type FILE.

    int a, b, c;
    // declearing a variables.

    ptr = fopen("integer.txt", "r");
    //  fopen is a function and it default takes two arguments one is the name of file and another is opeartion on it like r & w.
    //  here r is for read.

    fscanf(ptr, "%d %d %d", &a, &b, &c);
    // fscanf() is a function, This will read an integer from file in num variable.

    fclose(ptr);
    // fclose is a function to close the file , it will release the locked resource by it.

    printf("The values of a, b, c is : %d %d %d\n", a, b, c);
    // prints the result.

    return 0;
}