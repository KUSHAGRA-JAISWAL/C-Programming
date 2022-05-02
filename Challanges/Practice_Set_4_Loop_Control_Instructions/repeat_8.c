/**
* @file repeat_8.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-07
* @copyright Copyright (c) 2022
*/

/* Repeat 8 Using while loop. */

#include <stdio.h>
int main()
{
    // main function

    printf("Repeat 8 Ten Times!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int number = 8;
    int i = 0;
    // declaring variables and storing there values.

    while (i <= 10)
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        printf("Repeating : %d\n", number);
        // printing the result, it will run 10 times.

        i++;
        // incremeanting its value from 1.
    }

    return 0;
}