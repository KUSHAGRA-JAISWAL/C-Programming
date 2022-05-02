/**
* @file do_while_loop.c
* @author KUSHAGRA JAISWAL 
* @date 2022-02-05
* @copyright Copyright (c) 2022
*/

/* Program to Understand the Concepts of Do While Loop.Take any number less then 10 input from the user and print till 10. */

#include <stdio.h>
int main()
{
    // main function

    printf("Concepts of Do While Loop!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int number;
    // declaring variable.

    printf("Enter the Number to Print till 10 : ");
    // taking input from the user.

    scanf("%d", &number);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    /*
     do while loop works very similar to while loop.
     do while execute the code and then check's the condition.
     do while loop executes at least once.
    */
    
    do
    {
        printf("The number is : %d\n", number);
        // printing the result, it will run 10 times and will add 1 every time because we increment the value. 

        number++;
        // incrementing its value from 1.

    } while (number <= 10);
    

    return 0;
}