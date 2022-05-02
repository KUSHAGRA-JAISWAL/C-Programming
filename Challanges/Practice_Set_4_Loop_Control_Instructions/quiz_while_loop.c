/**
* @file quiz_while_loop.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-05
* @copyright Copyright (c) 2022
*/

/* Write a Program to print natural numbers from 10 to 20 when initial loop cointer i is initialized to 0. */

#include <stdio.h>
int main()
{
    // main function

    printf("i is 0 print from 10 to 20!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int i = 0;
    // declaring variable and storing values in it.

    while (i <= 20)
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        // note till the value of i will be 9 it will not enter in if condition and it will print nothing till 9.

        if (i >= 10)
        {
            printf("The Value of i Will be : %d\n", i);
            // printing the result, it will run 10 times and will add 1 every time because we incremeant the value.
        }

        i++;
        // incremeanting its value from 1.
    }

    return 0;
}