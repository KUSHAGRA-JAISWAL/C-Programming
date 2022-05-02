/**
 * @file structures_of_time.c
 * @author KUSHAGRA JAISWAL
 * @time 2022-04-26
 * @copyright Copyright (c) 2022
 */

/* Write a Program, Create a structure capable of storing time. Write a function to compare those time. */

#include <stdio.h>

#include <string.h>

typedef struct time
{
    int hour;
    int min;
    int sec;
} time;
// creating a structure which is custom datatype, using typedef to give an alias.

void timeDisplay(time t)
// function decleration & defination
{
    printf("_____________________________\n\n");
    // for some spacing in terminal.
    printf("   The time is   = %d:%d:%d\n", t.hour, t.min, t.sec);
    // prints the result..
    printf("_____________________________\n");
    // for some spacing in terminal.
}

int timeCompare(time t1, time t2)
{
    // Making decision on the basis of hour comparision
    if (t1.hour > t2.hour)
    // using if condition
    {
        return 1;
    }

    if (t1.hour < t2.hour)
    {
        return -1;
    }

    // Making decision on the basis of min comparision
    if (t1.min > t2.min)
    {
        return 1;
    }

    if (t1.min < t2.min)
    {
        return -1;
    }

     // Making decision on the basis of sec comparision 
    if (t1.sec > t2.sec)
    {
        return 1;
    }

    if (t1.sec < t2.sec)
    {
        return -1;
    }

    // if both times are equal it will return zero.
    return 0;
}

int main()
{
    // main function

    printf("Creating a structure capable of storing time!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    time t1 = {14, 4, 20};
    time t2 = {14, 4, 21};
    // using our custom datatype time and t is variable.

    timeDisplay(t1);
    timeDisplay(t2);
    // function calling..

    int cmp = timeCompare(t1, t2);
    // function calling

    printf("\n Time comparision function returns : %d\n", cmp);
    // prints the result.

    return 0;
}