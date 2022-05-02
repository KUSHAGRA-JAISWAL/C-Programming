/**
* @file increment_decrement_operator.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-05
* @copyright Copyright (c) 2022
*/

/* Program to Understand the Concepts of Increment and Decrement Operators. */

#include <stdio.h>
int main()
{
    // main function

    printf("Concepts of Increment and Decrement Operators!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int i = 5;
    int j = 5;
    int k = 5;
    // declearing variables and storing values in it.

    // Concept of incerement.

    printf("The value of i is : %d\n", i++);
    // here i++ means i = i + 1 ,here we are first printing the value of i then we are incrementing the value of i.
    // this line will give 5 as output.

    printf("The value of i is : %d\n", i);
    // printing the value of i after incrementing.
    // this line will give 6 as output.

    // NOTE :- now the value of i is 6 .

    printf("The value of i is : %d\n", ++i);
    // here ++i means i = 1+ i ,here we are first incrementing the value of i then we are printing the value of i.
    // this line will give 7 as output.

    printf("The value of i is : %d\n", i);
    // printing the value of i after incrementing.
    // this line will also give 7 as output.
//------------------------------------------------------------------------------------------------------------------------

    // Concept of decerement.

    printf("The value of j is : %d\n", j--);
    // here j-- means j = j - 1 ,here we are first printing the value of j then we are decrementing the value of j.
    // this line will give 5 as output.

    printf("The value of j is : %d\n", j);
    // printing the value of j after decrementing.
    // this line will give 4 as output.

    // NOTE :- now the value of j is 4 .

    printf("The value of j is : %d\n", --j);
    // here --j means j = 1- j ,here we are first decrementing the value of j then we are printing the value of j.
    // this line will give 3 as output.

    printf("The value of j is : %d\n", j);
    // printing the value of j after decrementing.
    // this line will also give 3 as output.

    // NOTE :- if you write k+=10 then it will increment the value of k by 10.
    // += is known as compound assignment operators.

    printf("The Value of k before compund assignment operator : %d \n",k);

    printf("The Value of k after compund assignment operator : %d \n",k+=10);

    return 0;
}