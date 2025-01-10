//Write a C program that implements a simple number guessing game. 
//The program should generate a random number between 1 and 100, and the user should guess the number
//within a limited number of attempts.
//Challenge: Provide hints to the user if the guessed number is too high or too low.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
    int randomNumber,userGuess,attempts=0;

    srand(time(NULL));
    randomNumber = rand()%10+1;
    
    printf("Number Guessing Game!\n");

    do {
        
        printf("Input your guess (between 1 and 10): ");
        scanf("%d", &userGuess);

        attempts++;

        if (userGuess == randomNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            
        } else if (userGuess < randomNumber) {
            printf("Number is too low. Try again!\n");
        } else {
            printf("Number is too high. Try again!\n");
        }

    } while (userGuess != randomNumber); 

    return 0;
}

