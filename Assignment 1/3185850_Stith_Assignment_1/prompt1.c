/* 
AI Used: Copilot
Creator: Baylie Stith (Added Comments)
This is a C program that prompts the user to guess a secret number between 1 and 10. The user has up to 3 attempts to guess 
the correct number. After each guess, the program provides feedback on whether the guess was too low, too high, or correct. 
If the user guesses correctly, they win; otherwise, they lose after 3 attempts.
Date: 9/6/2026
Edited: 9/8/2026
*/ 

#include <stdio.h>

int main() {
    // Initialize variables
    int secret = 7;      // fixed secret number
    int guess;
    int attempt;

    // Prompt the user to guess the number
    printf("Guess a number between 1 and 10.\n");


    // For loop to allows user up to 3 guesses and checks the number they guessed with the secret number
    for (attempt = 1; attempt <= 3; attempt++) {
        printf("Attempt %d/3. Enter your guess: ", attempt);
        scanf("%d", &guess);

        // Check if the guess is correct, too low, or too high.
        if (guess == secret) {
            // If correct, print a winning message and exit the program
            printf("Correct! You win!\n");
            return 0;   // stop immediately
            // If guess is wrong prompt user to try again stating if guess is to low/high
        } else if (guess < secret) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    // If loop finishes without a correct guess:
    printf("Sorry, you lose. The correct number was %d.\n", secret);

    return 0;
}