/**
 * @file find_grade.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-04
 * @copyright Copyright (c) 2022
 */
 
/* 
Write a program to find the grade of a student given his marks based on bellow:-
--> 90 - 100 -> A
--> 80 - 90 -> B
--> 70 - 80 -> C
--> 60 - 70 -> D
--> 50 - 60 -> E
--> 40 - 50 -> E-
--> <40 ->Fail
 */

#include <stdio.h>
int main()
{
    // main function

    printf("Find Grade of a Student!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int marks;
    // declaring variable.

    printf("Enter your Marks to find your Grade : ");
    // taking input from the user.

    scanf("%d", &marks);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    // in switch case, inside switch we write (expression).

    if (marks <= 100)
    // using if condition to check it.
    {

        switch (marks / 10)
        {

        case 10:

            printf("Your Grade is is A! Congratulations For Scoring Highest Marks\n");

            break;

        case 9:

            printf("Your Grade is is A!\n");

            break;
            // break is use to break the case by which if this case will match after this no case will be executed.
        case 8:

            printf("Your Grade is is B!\n");

            break;

        case 7:

            printf("Your Grade is is C!\n");

            break;

        case 6:

            printf("Your Grade is is D!\n");

            break;

        case 5:

            printf("Your Grade is is E!\n");

            break;

        case 4:

            printf("Your Grade is is E-!\n");

            break;

        case 3:
        case 2:
        case 1:

            printf("Sorry you scored below 40 you Failed, Go serve your higher purpose again!\n");

            break;
        }
    }

    else
    // using else condition to throw a message if the condition is false.
    {
        printf("Invalid Input ! \n");
    }

    return 0;
}
