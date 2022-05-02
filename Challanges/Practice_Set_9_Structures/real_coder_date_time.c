/**
 * @file real_coder_date_time.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-26
 * @copyright Copyright (c) 2022
 */

/* Write a Program, Create a structure capable of storing Dates and date (date STAMP).
 Write a function to compare those dates and date. */

#include <stdio.h>

#include <string.h>

typedef struct dateTime
{
    int day;
    int month;
    int year;
    int hour;
    int min;
    int sec;
} datm;
// creating a structure which is custom datatype, using typedef to give an alias.

void datmDisplay(datm dt)
// function decleration & defination
{
    printf("_____________________________\n\n");
    // for some spacing in terminal.
    printf("   The date and time is   = %d/%d/%d  %d:%d:%d\n", dt.day, dt.month, dt.year, dt.hour, dt.min, dt.sec);
    // prints the result..
    printf("_____________________________\n");
    // for some spacing in terminal.
}

int datmCompare(datm dt1, datm dt2)
{
    // Making decision on the basis of year comparision
    if (dt1.year > dt2.year)
    // using if condition
    {
        return 1;
    }

    if (dt1.year < dt2.year)
    {
        return -1;
    }

    // Making decision on the basis of month comparision
    if (dt1.month > dt2.month)
    {
        return 1;
    }

    if (dt1.month < dt2.month)
    {
        return -1;
    }

     // Making decision on the basis of day comparision 
    if (dt1.day > dt2.day)
    {
        return 1;
    }

    if (dt1.day < dt2.day)
    {
        return -1;
    }

    // Making decision on the basis of hour comparision
    if (dt1.hour > dt2.hour)
    // using if condition
    {
        return 1;
    }

    if (dt1.hour < dt2.hour)
    {
        return -1;
    }

    // Making decision on the basis of min comparision
    if (dt1.min > dt2.min)
    {
        return 1;
    }

    if (dt1.min < dt2.min)
    {
        return -1;
    }

    // Making decision on the basis of sec comparision
    if (dt1.sec > dt2.sec)
    {
        return 1;
    }

    if (dt1.sec < dt2.sec)
    {
        return -1;
    }

    // if both date and time are equal it will return zero.
    return 0;
}

int main()
{
    // main function

    printf("Creating a structure capable of storing date and time!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    datm dt1 = {26, 4, 2022, 12, 24, 48};
    datm dt2 = {14, 4, 2023, 15, 25, 50};
    // using our custom datatype date and t is variable.

    datmDisplay(dt1);
    datmDisplay(dt2);
    // function calling..

    int cmp = datmCompare(dt1, dt2);
    // function calling

    printf("\n The date and time comparision function returns : %d\n", cmp);
    // prints the result.

    return 0;
}