#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_TRIES 6
#define MAX_WORD_LENGTH 20

// Function to display the hangman
void displayHangman(int tries) {
    switch(tries) {
        case 0:
            printf("\n  +---+");
            printf("\n  |   |");
            printf("\n      |");
            printf("\n      |");
            printf("\n      |");
            printf("\n      |");
            printf("\n=========\n");
            break;
        case 1:
            printf("\n  +---+");
            printf("\n  |   |");
            printf("\n  O   |");
            printf("\n      |");
            printf("\n      |");
            printf("\n      |");
            printf("\n=========\n");
            break;
        case 2:
            printf("\n  +---+");
            printf("\n  |   |");
            printf("\n  O   |");
            printf("\n  |   |");
            printf("\n      |");
            printf("\n      |");
            printf("\n=========\n");
            break;
        case 3:
            printf("\n  +---+");
            printf("\n  |   |");
            printf("\n  O   |");
            printf("\n /|   |");
            printf("\n      |");
            printf("\n      |");
            printf("\n=========\n");
            break;
        case 4:
            printf("\n  +---+");
            printf("\n  |   |");
            printf("\n  O   |");
            printf("\n /|\\  |");
            printf("\n      |");
            printf("\n      |");
            printf("\n=========\n");
            break;
        case 5:
            printf("\n  +---+");
            printf("\n  |   |");
            printf("\n  O   |");
            printf("\n /|\\  |");
            printf("\n /    |");
            printf("\n      |");
            printf("\n=========\n");
            break;
        case 6:
            printf("\n  +---+");
            printf("\n  |   |");
            printf("\n  O   |");
            printf("\n /|\\  |");
            printf("\n / \\  |");
            printf("\n      |");
            printf("\n=========\n");
            break;
    }
}

int main() {
    char words[][MAX_WORD_LENGTH] = {
        "programming",
        "computer",
        "algorithm",
        "database",
        "network",
        "software",
        "developer",
        "keyboard",
        "monitor",
        "system"
    };
    
    // Initialize random seed
    srand(time(NULL));
    
    // Select a random word
    int wordIndex = rand() % 10;
    char word[MAX_WORD_LENGTH];
    strcpy(word, words[wordIndex]);
    int wordLength = strlen(word);
    
    // Create array for guessed word
    char guessedWord[MAX_WORD_LENGTH];
    for(int i = 0; i < wordLength; i++) {
        guessedWord[i] = '_';
    }
    guessedWord[wordLength] = '\0';
    
    int tries = 0;
    char guess;
    char guessedLetters[26] = {0};
    int guessedCount = 0;
    int correctGuesses = 0;
    
    printf("\nWelcome to Hangman!\n");
    printf("Try to guess the word. You have %d tries.\n\n", MAX_TRIES);
    
    while(tries < MAX_TRIES && correctGuesses < wordLength) {
        displayHangman(tries);
        printf("\nWord: %s\n", guessedWord);
        printf("Guessed letters: ");
        for(int i = 0; i < guessedCount; i++) {
            printf("%c ", guessedLetters[i]);
        }
        printf("\n\nEnter your guess: ");
        scanf(" %c", &guess);
        guess = tolower(guess);
        
        // Check if letter was already guessed
        int alreadyGuessed = 0;
        for(int i = 0; i < guessedCount; i++) {
            if(guessedLetters[i] == guess) {
                alreadyGuessed = 1;
                break;
            }
        }
        
        if(alreadyGuessed) {
            printf("\nYou already guessed that letter! Try again.\n");
            continue;
        }
        
        guessedLetters[guessedCount++] = guess;
        
        // Check if guess is correct
        int foundLetter = 0;
        for(int i = 0; i < wordLength; i++) {
            if(word[i] == guess) {
                if(guessedWord[i] != guess) {
                    guessedWord[i] = guess;
                    correctGuesses++;
                }
                foundLetter = 1;
            }
        }
        
        if(!foundLetter) {
            tries++;
            printf("\nWrong guess!\n");
        } else {
            printf("\nCorrect guess!\n");
        }
    }
    
    displayHangman(tries);
    printf("\nWord: %s\n", word);
    
    if(correctGuesses == wordLength) {
        printf("\nCongratulations! You won!\n");
    } else {
        printf("\nGame Over! The word was: %s\n", word);
    }
    
    return 0;
}
