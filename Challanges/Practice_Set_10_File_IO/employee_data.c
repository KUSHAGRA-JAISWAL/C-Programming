/**
 * @file employee_data.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-29
 * @copyright Copyright (c) 2022
 */

/* Write a Program, Take name and sallery of two employees as input from the user and write that into the text file. */

#include <stdio.h>

#include <string.h>

typedef struct employeedata
{
    float salary;
    char name[20];
} emp;
// creating a structure which is custom datatype, using type def to give an alias.

int main()
{
    // main function

    printf("User Input Employee data Writting using files !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    FILE *ptr;
    // creating a pointer of type FILE.

    int n;
    // declearing a variable.

    printf("\nEnter the number of accounts you want to store  : ");
    scanf("%d", &n);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    emp arr[n];
    // declearing array of type emp.

    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        printf("\nEnter the name of employee[%d]  : ", i+1);
        scanf("%s", arr[i].name);

        printf("\nEnter the salary of employee[%d]  : ", i+1);
        scanf("%f", &arr[i].salary);
        // taking input from the user.
    }

    ptr = fopen("employeedata.txt", "w");
    //  fopen is a function and it default takes two arguments one is the name of file and another is opeartion on it like r & w.
    //  here w is for write.

    for (int i = 0; i < n; i++)
    // for loop first initalize then test and then increment.
    {
        fprintf(ptr, "_____________________________\n");
        // for some spacing in terminal.
        fprintf(ptr, "|  Employee Name    : %s\n", arr[i].name);
        fprintf(ptr, "|  Employee Salary  : %.2f\n", arr[i].salary);
        // prints the result..
        fprintf(ptr, "_____________________________\n");
        // for some spacing in terminal.
    }

    fclose(ptr);
    // fclose is a function to close the file , it will release the locked resource by it.

    return 0;
}