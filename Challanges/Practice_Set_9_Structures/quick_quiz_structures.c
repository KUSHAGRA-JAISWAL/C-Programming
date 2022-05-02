/**
 * @file quick_quiz_structures.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-22
 * @copyright Copyright (c) 2022
 */

/* Write a Program to store the details of 3 employees from user defined data. */

#include <stdio.h>

#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
// creating a structure which is custom datatype.

int main()
{
    // main function

    printf("Store the details of 3 employees using Structures!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    struct employee e1, e2, e3;
    // using our custom datatype employee and e1 is variable.

    printf("\n Enter the code of Employee 1 : ");
    scanf("%d", &e1.code);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("\n Enter the salary of Employee 1 : ");
    scanf("%f", &e1.salary);

    printf("\n Enter the name of Employee 1 : ");
    scanf("%s", e1.name);

    printf("\n Enter the code of Employee 2 : ");
    scanf("%d", &e2.code);

    printf("\n Enter the salary of Employee 2 : ");
    scanf("%f", &e2.salary);

    printf("\n Enter the name of Employee 2 : ");
    scanf("%s", e2.name);

    printf("\n Enter the code of Employee 3 : ");
    scanf("%d", &e3.code);

    printf("\n Enter the salary of Employee 3 : ");
    scanf("%f", &e3.salary);

    printf("\n Enter the name of Employee 3 : ");
    scanf("%s", e3.name);

    printf("-------------------------\n");
    // for some spacing in terminal.

    printf("The code of the employee 1 is : %d\n", e1.code);
    printf("The salary of the employee 1 is : %.3f\n", e1.salary);
    printf("The name of the employee 1 is : %s\n", e1.name);
    // printing the details of employee 1

    printf("-------------------------\n");
    // for some spacing in terminal.

    printf("The code of the employee 2 is : %d\n", e2.code);
    printf("The salary of the employee 2 is : %.3f\n", e2.salary);
    printf("The name of the employee 2 is : %s\n", e2.name);
    // printing the details of employee 2

    printf("-------------------------\n");
    // for some spacing in terminal.

    printf("The code of the employee 3 is : %d\n", e3.code);
    printf("The salary of the employee 3 is : %.3f\n", e3.salary);
    printf("The name of the employee 3 is : %s\n", e3.name);
    // printing the details of employee 3

    return 0;
}