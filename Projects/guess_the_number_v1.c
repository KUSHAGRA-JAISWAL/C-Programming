/**
 * @file guess_the_number_v1.c
 * @author KUSHAGRA JAISWAL
 * @date 2022-02-10
 * @copyright Copyright (c) 2022
 */

/* We will write a Program that generates a random number and asks the player to guess it.
If the player's guess is higher than the actual number, the progrm displays "Lower Number Please".
Similarly if the user's guess is too low, the program prints "higher Number Please".
When the user guesses the correct number, the program display the number of guesses
the player use to arrive at the number.  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// these are the header files.

int main()
{
    // main function

    printf("\n*******Welcome To Number Guessing Game v1!*********\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("---------------------------------------------------\n");
    // for some spacing in terminal.

    int random_number, guessed_number;
    int number_of_guesses = 1;
    // declearing variables and storing values in it.

    srand(time(0));
    // this line will help to generate different randon numbers.

    random_number = rand() % 100 + 1;
    // here we generate a random number using rand() function after that
    // we are dividing it with 100 and take the remender so basicall this (rand() %100 + 1)
    // will only generate random numbers between 1 - 100.

    // printf("the number is : %d\n", random_number);
    // printing the generated random number

    // we will use do whille loop.
    // Keep running the loop util the number is guessed.

    /*
     do while loop works very similar to while loop.
     do while execute the code and then check's the condition.
     do while loop executes at least once.
    */

    printf("\nRules for Playing The Game!\n\n");
    printf("\n1. Every time a new random number will be generated between 1 to 100.\n");
    printf("\n2. You have to guess the number between 1 to 100.\n");
    printf("\n3. Game will not Over Until you guess the right number.\n");
    printf("\n4. When you guess the right number it will show in how many attempts you guess.\n");
    printf("\n5. I hope you will Enjoy it alot!\n\n");
    // rulees for playing this game.

    printf("---------------------------------------------------\n\n");

    do
    {
        printf("Guess the Number Between 1 to 100 : ");
        // taking input from the user.

        scanf("%d", &guessed_number);
        // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
        // &=address, it indicates where to store the input given by the user.

        if (guessed_number > random_number)
        // using if to check the condition.
        {
            printf("\nGuessed Number Is Too High!\n\n");
            // prints the result as per the condition.
        }

        else if (guessed_number < random_number)
        // using elseif to check another condition.
        {
            printf("\nGuessed Number Is Too Low!\n\n");
            // prints the result as per the condition.
        }

        else
        // using else condition to throw a message if the condition is false.
        {
            printf("\nYou Guessed it in %d attempts!\n\n", number_of_guesses);
            // prints the result.
        }
        number_of_guesses++;
        // increments on every guess till the number matches.

    } while (random_number != guessed_number);
    // checks the condition.

    return 0;
}