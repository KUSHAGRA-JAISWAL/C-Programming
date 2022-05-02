/**
* @file for_loop.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-05
* @copyright Copyright (c) 2022
*/

/* Program to Understand the concepts of for loop. */

#include <stdio.h>
int main()
{
    // main function

    printf("Concepts of For Loop!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    /*
    for loop first initalize then test and then increment.
    for loop is similar to while and do while loop , the syntax is:-

    for(initialize ; test ; increment){
        code
        code
        .....
        ........
    }
    */

    for (int a = 0; a < 10; a++)
    {
       printf("The value of a is : %d \n", a);
       // printing the result.
    }
    
    return 0;
}