/**
 * @file structures_of_date.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-26
 * @copyright Copyright (c) 2022
 */

/* Write a Program, Create a structure capable of storing dates. Write a function to compare those dates. */

#include <stdio.h>

#include <string.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;
// creating a structure which is custom datatype, using typedef to give an alias.

void dateDisplay(date d)
// function decleration & defination
{
    printf("_____________________________\n\n");
    // for some spacing in terminal.
    printf("   The date is   : %d/%d/%d\n", d.day, d.month, d.year);
    // prints the result..
    printf("_____________________________\n");
    // for some spacing in terminal.
}

int dateCompare(date d1, date d2)
{
    // Making decision on the basis of year comparision
    if (d1.year > d2.year)
    // using if condition
    {
        return 1;
    }

    if (d1.year < d2.year)
    {
        return -1;
    }

    // Making decision on the basis of month comparision
    if (d1.month > d2.month)
    {
        return 1;
    }

    if (d1.month < d2.month)
    {
        return -1;
    }

     // Making decision on the basis of day comparision 
    if (d1.day > d2.day)
    {
        return 1;
    }

    if (d1.day < d2.day)
    {
        return -1;
    }

    // if both dates are equal it will return zero.
    return 0;
}

int main()
{
    // main function

    printf("Creating a structure capable of storing dates!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    date d1 = {26, 4, 2022};
    date d2 = {26, 4, 2022};
    // using our custom datatype date and d is variable.

    dateDisplay(d1);
    dateDisplay(d2);
    // function calling..

    int cmp = dateCompare(d1, d2);
    // function calling

    printf("\n Date comparision function returns : %d\n", cmp);
    // prints the result.

    return 0;
}