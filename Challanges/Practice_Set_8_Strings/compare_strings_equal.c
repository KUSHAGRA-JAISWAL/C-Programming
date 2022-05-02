/**
 * @file compare_strings_equal.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-21
 * @copyright Copyright (c) 2022
 */

/* Write a Program to take string as input from user using %c and %s. Conform that strings are equal. */

#include <stdio.h>

#include <string.h>

int main()
{
    // main function

    printf("Comparing character and strings input are equal or not !\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str1[34];
    char str2[34];
    // creating strings..

    char c;
    // declearing a character.

    int i = 0;
    // declearing a variable and storing values in it.

    printf("\n Enter the first string : ");
    scanf("%s", str1);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%s" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    printf("\n Enter the second string character by character : ");

    while (c != '\n')
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        fflush(stdin);
        // it will clear the value taken by scanf function.

        scanf("%c", &c);

        str2[i] = c;
        // it will store the character  inside the c.

        i++;
        // incremeanting its value from 1.
    }

    str2[i-1] = '\0';
    // it will remeve the null charater.

    printf("The value of str1 is : %s \n", str1);
    // print the value of str1.

     printf("The value of str2 is : %s \n", str2);
    // print the value of str2.

    printf("strcmp for these strings returns : %d", strcmp(str1,str2));
    // prints the result by comparing the strings.

    return 0;
}