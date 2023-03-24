#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, guess, numGuesses = 0;
    srand(time(NULL)); // seed random number generator
    numberToGuess = rand() % 100 + 1; // generate random number between 1 and 100

    printf("Guess a number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        numGuesses++;

        if (guess < numberToGuess) {
            printf("Your guess is too low\n");
        } else if (guess > numberToGuess) {
            printf("Your guess is too high\n");
        } else {
            printf("Congratulations, you guessed the number!\n");
            printf("Number of guesses: %d\n", numGuesses);
        }
    } while (guess != numberToGuess);

    return 0;
}
