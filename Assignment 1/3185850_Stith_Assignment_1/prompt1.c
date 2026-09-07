// AI: Copilot

#include <stdio.h>

int main() {
    int secret = 7;      // fixed secret number
    int guess;
    int attempt;

    printf("Guess a number between 1 and 10.\n");

    for (attempt = 1; attempt <= 3; attempt++) {
        printf("Attempt %d/3. Enter your guess: ", attempt);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Correct! You win!\n");
            return 0;   // stop immediately
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
