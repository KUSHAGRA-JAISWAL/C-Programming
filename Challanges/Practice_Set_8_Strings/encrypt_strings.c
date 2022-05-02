/**
 * @file encrypt_strings.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-21
 * @copyright Copyright (c) 2022
 */

/* Write a Program to encrypt a string by adding 1 to its ASCII value of its character. */

#include <stdio.h>

void encrypt(char *str)
// function defination
{
    char *ptr = str;
    // creating string and storing value of str in it.

    while (*ptr != '\0')
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        *ptr = *ptr + 1;
        // it will change each character ASCII value by adding 1 to it.

        ptr++;
        // incrementing its value
    }

}

int main()
{
    // main function

    printf("user created encrypt function!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str[30] = "KUSHAGRA"; 
    // creating string.

    encrypt(str);
    // function calling 

    printf("The encrypted value of this string str is : %s\n",str);
    // prints the result.

    return 0;
}