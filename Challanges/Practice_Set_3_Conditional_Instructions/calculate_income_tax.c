/**
 * @file calculate_income_tax.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-04
 * @copyright Copyright (c) 2022
 */
 
/* 
Calculate income tax paid by an employee to the government as per the slabs mention below:-

      Income Slabs                         Tax
      __________________________________________
      2.5 Lakh's - 5 Lakh's                  5%
      -----------------------------------------
      5.0 Lakh's - 10.0 Lakh's              20%
      -----------------------------------------
        Abone 10.0 Lakh's                  30% 
      _________________________________________

Note that there is no tax below 2.5 Lakh's. Take Income amount as an input from the user.
  */

#include <stdio.h>
int main()
{
    // main function

    printf("Calculating Income Tax!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

    float income, tax;
    // declaring variables.

    tax = 0;
    // storing value.

    printf("Enter your Income to Find your payble amount of Tax : ");
    // taking input from the user.

    scanf("%f", &income);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%f" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    if (income >= 250000 && income <= 500000)
    // using if condition to find the amout of tax.
    {
        tax = tax + 0.05 * (income - 250000);
        // formula of calculating the Tax.
    }
    if (income >= 500000 && income <= 1000000)
    // using if condition to find the amout of tax.
    {
        tax = tax + 0.20 * (income - 500000);
        // formula of calculating the Tax.
    }
    if (income >= 1000000)
    // using if condition to find the amout of tax.
    {
        tax = tax + 0.30 * (income - 1000000);
        // formula of calculating the Tax.
    }

    printf("Your amount of tax will be %f have to be paid in end of this month.\n", tax);
    // printing the result.

    return 0;
}