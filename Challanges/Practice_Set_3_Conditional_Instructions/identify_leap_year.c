/**
 * @file identify_leap_year.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-04
 * @copyright Copyright (c) 2022
 */

/* Write a program to find wheather a year is leapyear or not take the year as input from the user. */

#include <stdio.h>
int main()
{
    // main function

    printf("Leap Year or Not!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int year;
    // declaring variable.

    printf("Enter the year to check wheather it is leap year or not : ");
    // taking input from the user.

    scanf("%d", &year);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    // The year can be evenly divided by 4, is a leap year, unless:
    // The year can be evenly divided by 100, it is NOT a leap year, unless:
    // The year is also evenly divisible by 400. Then it is a leap year.

    if (year % 4 == 0)
    // using if condition to check it.
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Entered Year is %d Which is a Leap year!\n", year);
            }
            else
            // using else condition to throw a message if the condition is false.
            {
                printf("Entered Year is %d Which is not a Leap year!\n", year);
            }
        }
        else
        // using else condition to throw a message if the condition is false.
        {
            printf("Entered Year is %d Which is a Leap year!\n", year);
        }
    }
    else
    // using else condition to throw a message if the condition is false.
    {
        printf("Entered Year is %d Which is not a Leap year!\n", year);
    }

    return 0;
}