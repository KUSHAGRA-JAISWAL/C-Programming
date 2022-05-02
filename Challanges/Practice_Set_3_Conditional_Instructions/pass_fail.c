/**
 * @file pass_fail.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-04
 * @copyright Copyright (c) 2022
 */
 
/* Write a program to find out wheather a student is pass or fail, if it requires total 40% and at least 33% in each subject to 
pass. Assume three subjects and take marks as input from the user. */

#include <stdio.h>
int main()
{
    // main function

    printf("Pass Or Fail!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    int physics, chemestry, maths;
    float total;
    // declaring variables.

    printf("Enter your Marks of subject Physics : ");
    // taking input from the user.

    scanf("%d", &physics);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("Enter your Marks of subject Chemestry : ");

    scanf("%d", &chemestry);

    printf("Enter your Marks of subject Maths : ");

    scanf("%d", &maths);

    total = (physics + chemestry + maths) / 3;
    // formula for calculating percentage assuming total marks is 100, in each subjct.

    if ((total == 40) && physics > 33 && maths > 33 && chemestry > 33)
    // using if condition so that if someone just pass with 40% it will show the message given below.
    {
        printf("Your percentage is %f You just Passed!\n",total);
        // printing the result.
    }

    else if ((total < 40) || physics < 33 || maths < 33 || chemestry < 33)
    // using else if condition to check student is pass or fail.
    {
        printf("Your percentage is %f you Failed!\n",total);
    }

    else
    // using else condition to throw a message if the condition is false.
    {
        printf("Your percentage is %f You Passed!\n",total);
    }

    return 0;
}