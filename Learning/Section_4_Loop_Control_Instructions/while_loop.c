/**
* @file while_loop.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-05
* @copyright Copyright (c) 2022
*/

/* Program to Understand the Concepts of While Loop, Take any number less then 10 input from the user and print till 10. */

#include <stdio.h>
int main()
{
    // main function

    printf("Concepts of While Loop!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int number;
    // declaring variable.

    printf("Enter the Number to Print till 10 : ");
    // taking input from the user.

    scanf("%d", &number);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    while (number <= 10)
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        printf("%d\n", number);
        // printing the result, it will run 10 times and will add 1 every time because we incremeant the value. 

        number++;
        // incremeanting its value from 1.
    }

    // this lines will lead to an infinite loop:-
    /* 
    int a = 11;
    while(a>10) {
        printf("%d \n",a);
        a++;
    */

    return 0;
}