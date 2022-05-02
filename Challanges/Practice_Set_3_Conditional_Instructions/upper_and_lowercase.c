/**
 * @file upper_and_lowercase.c
 * @author KUSHAGRA JAISWAL 
 * @date 2022-02-04
 * @copyright Copyright (c) 2022
 */

/* Write a program to find chatacter is in Lower case or in Upper case, take character as input from user. */

#include <stdio.h>
int main()
{
    // main function

    printf("Calculating Income Tax!\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("--------------------\n");
    // for some spacing in terminal.

/*
ASCII, abbreviation of American Standard Code 
For Information Interchange, a standard data-transmission code that is used by smaller and less-powerful computers 
to represent both textual data (letters, numbers, and punctuation marks) and noninput-device commands (control characters).

                TABLE
Letter	ASCII Code	Letter	ASCII Code	
  a	      097		  A	      065	
  b	      098		  B	      066	
  c	      099		  C	      067	
  |        |          |        |
  |        |          |        |
  y	      121		  Y	      089	
  z	      122		  Z	      090	
*/

    char a = 97;
    // ASCII code of small a.

    char z = 122;
    //AsCII code of small Z.
    // declearing variables and storing values in it.

    char input;
    // declearing a variable.

    printf("Enter a Letter : ");
    // taking input from the user.

    scanf("%c", &input);
    // here scanf is a function which helps to take the input from the user and asign to a variable, "%f" is a formate specifier.
    // &=address, it indicates where to store the input given by the user.

    if (input >= 97 && input <= 122)
    // using if condition to find Upper case or Lower case.
    {
        printf("Your given character '%c' is in Lower Case! \n", input);
        // printing the result.
    }
    else
    // using else condition to throw a message if the condition is false.
    {
        printf("Your given character '%c' is in Upper Case! \n", input);
        // printing the result.
    }

    return 0;
}