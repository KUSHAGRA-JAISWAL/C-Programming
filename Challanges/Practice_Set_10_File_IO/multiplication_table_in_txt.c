/**
 * @file multiplication_table_txt.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-29
 * @copyright Copyright (c) 2022
 */

/* Write a Program to generate multiplication table of a given number in text format.
   Make sure that the file is readable and well formated. */

#include <stdio.h>

int main()
{
    // main function

    printf("Generating multiplication table in text format!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    FILE *ptr;
    // creating a pointer of type FILE.

    int num;
    // declearing a variable.

    printf("\n Enter the integer of the table you want : ");
    scanf("%d", &num);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    ptr = fopen("table.txt", "w");
    //  fopen is a function and it default takes two arguments one is the name of file and another is opeartion on it like r & w.
    //  here w is for write.

    fprintf(ptr, "\nThe table of %d is : \n", num);
    // prints the result inside the file.

    for (int i = 0; i < 10; i++)
    // for loop first initalize then test and then increment.
    {
        fprintf(ptr, "%d X %d = %d\n", num, i + 1, num * (i + 1));
        // prints the result inside the file.
    }

    printf("Succussfully generated the table of %d in table.txt file.", num);
    // prints the message.

    fclose(ptr);
    // fclose is a function to close the file , it will release the locked resource by it.

    return 0;
}