/**
* @file quiz_do_while_loop.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-05
* @copyright Copyright (c) 2022
*/

/* Write a Program to print first n natural numbers using do while loop. */

#include <stdio.h>
int main()
{
    // main function

    printf("Print First n Natural Numbers Using Do While Loop!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int n;
    // declaring variable

    int i = 0;
    // declaring variable and storing values in it.

    printf("Enter the value of n : ");
    // taking input from the user.

    scanf("%d", &n);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    do
    //do while execute the code and then check's the condition.
    {
        printf("The Number is : %d\n", i + 1);
        // printing the result, it will start from 1 and print till n.

        i++;
        // incrementing its value from 1.

    } while (i < n);

    return 0;
}