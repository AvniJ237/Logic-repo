/*declare life and decide a word to be guessed dont let the user know the 
word if guessed correctly then display the word and if not then display the number of
 lives left and the letters guessed so far
  make condition string==word somehow and also work on error due to string 
use for loop to check if the letter is in the word and if it is then replace the underscore with the letter and if not then decrement the life and display the 
number of lives left 
 also add mutliple words for computer to choose from */
 #include<stdio.h>
#include<string.h> 
 int main()
 {
    char word[8]="winning",guess[26],letter, string[8]="-------";
    int lives=5,n=0;
    printf("Welcome to Hangman! You have %d lives to guess the word.\n", lives);
    printf("The word has %lu letters.\n", sizeof(word) );
    printf("You can guess one letter at a time. Good luck!\n");  
    while(lives > 0) {
    printf("Current progress: %s\n", string);
    printf("Letters guessed so far: ");
    for (int i = 0; i < n; i++) {
    printf("%c ", guess[i]);}
        printf("\nEnter a letter: ");
    scanf(" %c", &letter);
    int count = 0;
    for (int i = 0; i < 7; i++) {
        if (word[i] == letter) {
            string[i] = letter;
            count++;
        }
    }
    if (count > 0) {
        printf("Correct guess! The letter '%c' is in the word.\n", letter);
    } else {
        lives--;
        printf("Incorrect guess. You have %d lives left.\n", lives);
        guess[n] = letter;
        n++;
    }
    if (strcmp(string, word) == 0) {
        printf("Congratulations! You've guessed the word: %s\n", word);
        break;
    }
}
    return 0;
 }