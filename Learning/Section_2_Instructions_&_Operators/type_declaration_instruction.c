/**
 * @file type_declaration_instruction.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-02
 * @copyright Copyright (c) 2022
 */
 
/* Program to Understand the concepts of Type Declaration Instruction. */

#include <stdio.h>
int main()
{
    // main function

    printf("Concepts of Type Declaration Instruction!\n");

    printf("--------------------\n");
    // for some spacing in terminal.

    int a = 5;
    // declearing variables and storing values in it.

    int b, c, d;
    // declaring variables.

    d = c = b = a;

    printf("The Value of a is : %d\n", a);
    printf("The Value of b is : %d\n", b);
    printf("The Value of c is : %d\n", c);
    printf("The Value of d is : %d\n", d);
    // so here as we can see printing all the statements it will give no error because a=b=c=d = 5 , this is the type decleration.

    /*
    float f = e +9.8;
    float e= 1.1;
    // declearing a variable and storing values in it.

    printf("Sum of e & f is : %f\n",e+f);
    //printing the sum.
    */
    // this program will generate error because we first declare 'f' then we declare 'e' so at the time of execution
    // compiler don't know the value of 'e' because it will first execute 'f' .

    float e = 1.1;
    float f = a + 9.8;
    // declearing a variable and storing values in it.

    printf("Sum of a & b is : %f\n", e + f);
        //printing the sum.

        return 0;
}