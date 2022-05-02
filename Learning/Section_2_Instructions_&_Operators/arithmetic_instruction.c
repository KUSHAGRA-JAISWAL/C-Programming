/**
 * @file arithmetic_instruction.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-02
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the Concepts of Arithmetic Instruction. */

#include <stdio.h>
#include <math.h>
int main()
{
    // main function

    printf("Concepts of Arithmetic Instruction!\n");

    printf("--------------------\n");
    // for some spacing in terminal.

    int a = 10;
    int b = 5;
    // declaring variables and there values.

    int z;
    z=a*b; 
    // (=) is a assignment operator which helps to assign a value in a variable.
    // legal, we can assign the value of multiplication of a and b into z .
    /*
    a*b=z;
    // it is illegal because we cannot perform operation like this and then store a value.
    */

    printf("Sum is : %d\n", a + b);
    printf("Difference is : %d\n", a - b);
    printf("Multiplication is : %d\n", a + b);
    printf("Division is : %d\n", a / b);
    printf("The value of z is : %d\n",z);
    //printing the results by performing Arithmetic Operations.

    printf("On Dividing 6 with 5 Remender will be : %d\n", 6%5);    //--> will return 1
    // (%) it gives remender on dividing two numbers.
    printf("On Dividing -6 with 5  Remender will be : %d\n", -6%5);  //--> will return -1
    // (%) it gives remender on dividing two numbers.
    printf("On Dividing 6 with -5  Remender will be : %d\n", 6%-5);  //--> will return 1
    // there is a rule which says the result will have the sign of numerator on dividing two numbers.

    // No operator is assumed to be present.
    /*
    printf("The value of 4 * 5 is : %d "\n, 4.5);
    printf("The value of 4 * 5 is : %d "\n, (4)(5));
    */
   // this will throw a error .

   printf("The value of 4 * 5 is : %d\n", (4)*(5));
   // this is the correct way.

   // there is no operator to perform exponentation in C.

  printf("The value of 4 ^ 5 is : %d\n", 4^5); //--> will not produce 4 to the power 5.
  // because (^) it is a Bitwise Xor Operator.

  // if we have to calculate power we have to import math library and have to use pow function .
  printf("The value of 4 to the power 5 is : %f\n", pow(4, 5));
  // we have to use %f because it will return double value and it is a real number.

    return 0;
}