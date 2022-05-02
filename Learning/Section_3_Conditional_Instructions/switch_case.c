/**
 * @file switch_case.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-03
 * @copyright Copyright (c) 2022
 */
 
/* Program to Understand the Concepts of Switch Case, Write a program to give rating to a hotel service between 1 to 5. */

#include <stdio.h>
int main()
{
    // main function

    printf("Concepts of Switch Case!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int rating;
    // declaring variable.

    printf("Enter your rating between 1 to 5 : ");
    // taking input from the user.

    scanf("%d", &rating);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    // in switch case, inside switch we write (expression).

    switch (rating)
    {
    case 1:

        printf("Your rating is 1!\n");

        break;
        // break is use to break the case by which if this case will match after this no case will be executed.
    case 2:

        printf("Your rating is 2!\n");

        break;

    case 3:

        printf("Your rating is 3!\n");

        break;

    case 4:

        printf("Your rating is 4!\n");

        break;

    case 5:

        printf("Your rating is 5!\n");

        break;

    default:
        // it will be execute when no case will be match.

        printf("Invalid Rating!\n");

        break;
    }

    return 0;
}