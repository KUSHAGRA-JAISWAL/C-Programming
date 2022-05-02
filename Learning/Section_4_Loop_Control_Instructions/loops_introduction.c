/**
* @file loops_introduction.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-05
* @copyright Copyright (c) 2022
*/

/* Program to Understand the concepts of Loops. */

#include <stdio.h>
int main()
{
     // main function

     printf("Concepts of Loops!\n");
     // printf is a function which is use to print any text.
     // giving a message in terminal.

     printf("--------------------\n");
     // for some spacing in terminal.

     int a = 1;
     // declaring variable and storing values in it.

     printf(" %d \n", a);
     // printing a.

     a++;
     // a++ means we are incremeanting the value of a from 1.

     printf(" %d \n", a);
     // printing a again but this time it will print 2 becuse we incremeanted its value from 1.


     // Loops are use to repeat similar part of a code snippet efficiently.

     /* 
        (printf(" %d \n", a);
        a++;
        printf(" %d \n", a); ----> print it till 100.
        ---) 
     */

     // i think no one wants to write same block of codes 100 times to print 1 to 100 thats why there is concept of loops.

     /* 
     loops are of 3 type:-

     1- for loop

     2- while loop

     3- do while loop
     */

     return 0;
}