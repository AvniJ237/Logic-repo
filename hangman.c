/*declare life and decide a word to be guessed dont let the user know the 
word if guessed correctly then display the word and if not then display the number of
 lives left and the letters guessed so far*/
 /*#include<stdio.h>
 int main()
 {
    char word[7]="winning",guess[26],letter, srting[13]="_|_|_|_|_|_|_";
    int lives=5;
    printf("Welcome to Hangman! You have %d lives to guess the word.\n", lives);
    printf("The word has %lu letters.\n", sizeof(word) - 1);
    printf("You can guess one letter at a time. Good luck!\n");
    printf("Current progress: %s\n", srting);
    printf("Enter a letter: ");
    scanf(" %c", &letter);
    if (letter == 'w' || letter == 'i' || letter == 'n' || letter == 'g') {
        printf("Correct guess! The letter '%c' is in the word.\n", letter);
        if(letter == 'w') {
            srting[0] = 'w';
        }
        if(letter == 'i') {
            srting[2] = 'i';
            srting[10] = 'i';
        }
        if(letter == 'n') {
            srting[4] = 'n';
            srting[6] = 'n';
            srting[8] = 'n';
        }
        if(letter == 'g') {
            srting[12] = 'g';
        }
        printf("Current progress: %s\n", srting);
    } else {
        lives--;
        printf("Incorrect guess. You have %d lives left.\n", lives);
    }

    return 0;
 }*/