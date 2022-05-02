/**
 * @file user_made_strcpy.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-04-21
 * @copyright Copyright (c) 2022
 */

/* Write a Program to Create your own version of strcpy function from <string.h>. */

#include <stdio.h>

void stringCopy(char *str2, char *str)
// function defination
{
    char *ptr = str;
    // creating string and storing value of str in it.

    int i = 0;
    // declearing a variable and storing values in it.

    while (*ptr != '\0')
    // using while loop to perform repeated task efficiently.
    // the block of codes will keep executing as long as the condition is true.
    {
        str2[i] = str[i];
        // it will store the value of one string to another.

        i++;
        ptr++;
        // incrementing its value
    }
    str2[i] = '\0';
    // it will be the end point of str2.

}

int main()
{
    // main function

    printf("user created strcpy function!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("-------------------------\n");
    // for some spacing in terminal.

    char str[30] = "KUSHAGRA";
    char str2[30];
    // creating string.

    stringCopy(str2, str);
    // function calling 

    printf("The value of this string str is : %s\n",str);

    printf("The value of this string str2 is : %s\n",str2);
    // prints the result.

    return 0;
}