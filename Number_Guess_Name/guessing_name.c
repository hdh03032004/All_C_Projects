#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    //Initial seed for random
    srand(time(NULL));
    secretNumber = rand() % 100 + 1; // Sinh number from 1 to 100

    printf("==== Number Guessing Game ====\n");
    printf("I have picked a number between 1 and 100.\nCan you guess");

    do{
        printf("Enter your guess: ");
        scanf("%d",&guess);
        attempts ++;
        
        if (guess < secretNumber){
            printf("Too low! Try again. \n");
        }else if (guess > secretNumber){
            printf("Too high! Try again.\n");
        } else {
            printf("Correct! You guessed it in %d attempts.\n",attempts);
        } 
    }
    while (guess != secretNumber);
    return 0;

}