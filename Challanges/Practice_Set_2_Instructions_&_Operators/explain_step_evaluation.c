/**
 * @file explain_step_evaluation.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-02
 * @copyright Copyright (c) 2022
 */
 
/* Explain step by step evaluation of (3 * x / y - z + k), Where x=2, y=3, z=3, k=1.  */

#include <stdio.h>
int main()
{
    // main function

    printf("Step by Step Evaluation!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;
    int result = 3 * x / y - z + k;
    // declearing a variables and storing values in it.

    /* 
    by following the precidency of operators.

    --> 3 * x / y - z + k
    --> 3 * 3 / 3 - 3 + 1   
    // note:- when multiplication and division together are there then we follow left to right precidency.
    --> 6 / 3 - 3 + 1
    --> 2 - 3 + 1
    --> -1 + 1
    --> 0
    the answer will be zero lets check it out by printing the result.
    */

    printf("The Result is : %d \n", result);
    // printing the result.

       return 0;
}