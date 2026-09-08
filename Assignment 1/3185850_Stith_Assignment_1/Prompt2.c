/* 
AI Used: Claude
Creator: Baylie Stith (Added Comments)
This is a C program that prompts the user to guess a secret number between 1 and 10. The user has up to 3 attempts to guess 
the correct number. After each guess, the program provides feedback on whether the guess was too low, too high, or correct. 
If the user guesses correctly, they win; otherwise, they lose after 3 attempts.
Date: 9/6/2026
Edited: 9/8/2026
*/ 


#include <stdio.h>

// Initialize variables
int main() {
    int secret = 7;
    int guess;
    int attempts = 3;
    int won = 0;

    // Prompt the user to guess the number
    printf("Guess a number between 1 and 10.\n");

    // For loop to allow user up to 3 attempts. Checks the attempt against the secret number
    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d/%d. Enter your guess: ", i, attempts);
        scanf("%d", &guess);

        // Check if the guess is correct, too low, or too high.
        if (guess == secret) {
            // If correct, print a winning message and exit the program
            printf("Correct! You win!\n");
            won = 1;
            break;
            // If guess is wrong prompt user to try again stating if guess is too low/high
        } else if (guess < secret) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    // If the user did not win after all attempts, print a losing message
    if (!won) {
        printf("You lose! The correct number was %d.\n", secret);
    }

    return 0;
}