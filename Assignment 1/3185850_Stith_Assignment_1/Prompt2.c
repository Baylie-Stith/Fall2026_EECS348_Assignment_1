// AI: Claude

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