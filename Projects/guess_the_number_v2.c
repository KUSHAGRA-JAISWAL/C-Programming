/**
 * @file number_guessing_game.c
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

    printf("\n*******Welcome To Number Guessing Game v2!*********\n");
    // printf is a function which is use to print any text.
    // giving a message in terminal.

    printf("---------------------------------------------------\n");
    // for some spacing in terminal.

    int random_number, guessed_number;
    int number_of_guesses = 5;
    // declearing variables and storing values in it.

    srand(time(0));
    // this line will help to generate different randon numbers.

    random_number = rand() % 10 + 1;
    // here we generate a random number using rand() function after that
    // we are dividing it with 10 and take the remender so basicall this (rand() %10 + 1)
    // will only generate random numbers between 1 - 10.

    // printf("the number is : %d\n", random_number);
    // printing the generated random number

    // we will use whille loop.

    printf("\nRules for Playing The Game!\n\n");
    printf("\n1. Every time a new random number will be generated between 1 to 10.\n");
    printf("\n2. You have to guess the number between 1 to 10.\n");
    printf("\n3. You only have 5 attemps to guess the right number.\n");
    printf("\n4. When you guess the right number it will show how many attempts was left.\n");
    printf("\n5. I hope you will Enjoy it alot!\n\n");
    // rulees for playing this game.

    printf("---------------------------------------------------\n\n");

    while (guessed_number != random_number || number_of_guesses != 0)
    {
        printf("Guess the Number Between 1 to 10 : ");
        // taking input from the user.

        scanf("%d", &guessed_number);
        // here scanf is a function which helps to take the input from the user and asign to a variable, "%d" is a formate specifier.
        // &=address, it indicates where to store the input given by the user.

        if (guessed_number > random_number)
        // using if to check the condition.
        {
            printf("\nGuessed Number Is Too High!\n\n");
            // prints the result as per the condition.

            number_of_guesses--;
            // decrements on every guess till the number matches.
        }

        if (guessed_number < random_number)
        // using if to check another condition.
        {
            printf("\nGuessed Number Is Too Low!\n\n");
            // prints the result as per the condition.

            number_of_guesses--;
            // decrements on every guess till the number matches.
        }

        if (guessed_number == random_number)
        {
            printf("\nYou have %d guesses left!\n\n you Win\n", number_of_guesses);
            // prints the result.

            break;
        }

        if (number_of_guesses == 0)
        {
            printf("\nYou have %d guesses left!\n\n you lost\n", number_of_guesses);
            // prints the result.

            break;
        }
    }

    return 0;
}