/**
 * @file operator_precidence.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-02
 * @copyright Copyright (c) 2022
 */
 
/* Program to Understand the concept of Operator Precidence. */

#include <stdio.h>
int main()
{
    // main function

    printf("Concepts of Operator Precidence!\n");

    printf("--------------------\n");
    // for some spacing in terminal.

    int x = 2;
    int y = 3;
    // declaring variables and storing values.
    /*
    this priority order table tells that wich operation will execute first.

     priority     orders
     _____________________
     1st          *./.%
     ---------------------
     2nd          + , -
     ---------------------
     3rd            =
    */

    printf("The Value of 3*x - 8*y is : %d\n",3*x - 8*y);

    printf("The Value of 8*y / 3*x is : %d\n",8 * y / 3 * x);
    // 8*y / 3*x = 24/6 will give wrong answer because
    // 8*3 / 3*2
    // 24/3*2
    //8*2
    //16
    // it happens because of the associativity of the operator and *,/ follows the left to right associativity.

    return 0;
}