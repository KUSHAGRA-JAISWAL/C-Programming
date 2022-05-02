/**
* @file sum_first_ten.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-07
* @copyright Copyright (c) 2022
*/

/* Write a program to sum first ten natiral numbers using for, while and do whille loop. */

#include <stdio.h>
int main()
{
    // main function

    printf("Sum First Ten Natural Numbers!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int i = 0;
    int sum = 0;
    int n = 10;
    // declaring variables and storing values in it.

    //Using for loop:-

    for (i = 0; i <= n; i++)
    // for loop first initalize then test and then increment.

    {
        sum += i;
        // it will add value of i in sum every time.
    }

    printf("The value of sum (1 to 10) using for loop is : %d \n", sum);
    // printing the result.

    // Using while loop:-

    i = 0;
    sum = 0;
    // resettting the values of sum and i.

    while (i <= n)
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {

        sum += i;
        // it will add value of i in sum every time.

        i++;
        // incremeanting its value from 1.
    }

    printf("The value of sum (1 to 10) using while loop is : %d \n", sum);
    // printing the result.

    // using do while loop:-

    i = 0;
    sum = 0;
    // resettting the values of sum and i.

    do
    //do while execute the code and then check's the condition.

    {
        sum += i;
        // it will add value of i in sum every time.

        i++;
        // incrementing its value from 1.

    } while (i <= n);

    printf("The value of sum (1 to 10) using while do loop is : %d \n", sum);
    // printing the result.

    return 0;
}
