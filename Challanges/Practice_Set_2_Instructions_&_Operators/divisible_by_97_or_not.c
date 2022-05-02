/**
 * @file divisible_by_97_or_not.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-02
 * @copyright Copyright (c) 2022
 */
 
/* Write a Program to determine wheather a number is divisible by 97 or not. */

#include <stdio.h>
int main()
{
    // main function

    printf("Divisible by 97 or not!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int number;
    // declearing a variable.

    printf("Enter the number to check weather it is divisible or not : ");
    // taking input from the user.

    scanf("%d", &number);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("\n If Divisiblity test returns 0 then it is divisible by 97 else it is not divisible!\n\n");
    // giving a message in terminal.
    
     printf("Divisiblity Test Returns : %d\n", number % 97);
     // using remender to check the result.

    return 0;
}