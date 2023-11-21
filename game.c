#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    const int MIN = 1; // could be adjusted 
    const int MAX = 100; // could be adjusted
    int guess;
    int guesses = 0;
    int answer;

    // uses the current time as a seed
    srand(time(0));

    // generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;
    // printf("%d", answer); // for checking

    do {
        printf("Pick a number between %d and %d: ", MIN, MAX);
        scanf("%d", &guess);
        if (guess > answer) {
            printf("Too high!\n");
        } else if (guess < answer) {
            printf("Too low!\n");
        } else {
            printf("\nCORRECT!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);

    return 0;
}
