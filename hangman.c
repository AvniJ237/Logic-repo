/*declare life and decide a word to be guessed dont let the user know the 
word if guessed correctly then display the word and if not then display the number of
 lives left and the letters guessed so far
  make condition string==word somehow and also work on error due to string 
use for loop to check if the letter is in the word and if it is then replace the underscore with the letter and if not then decrement the life and display the 
number of lives left 
 also add mutliple words for computer to choose from */
 #include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#include<time.h>
 int main()
 {  srand(time(0));
    char word[][15]={"winning","lantern","cottage","meadow","willow","calico","choclate","marshmallow","leapord","butterfly"},guess[26],letter, string[15];
    int lives=5,n=0,j=rand()%10;
    int length = strlen(word[j]);
for(int i = 0; i < length; i++)
{string[i] = '-';}
string[length] = '\0';
    printf("Welcome to Hangman! You have %d lives to guess the word.\n", lives);
    printf("The word has %lu letters.\n", strlen(word[j]));
    printf("You can guess one letter at a time. Good luck!\n");  
    while(lives > 0) {
    printf("Current progress: %s\n", string);
    printf("Wrong letters guessed so far: ");
    for (int i = 0; i < n; i++) {
    printf("%c ", guess[i]);}
        printf("\nEnter a letter: ");
    scanf(" %c", &letter);
    if (strchr(guess, letter) != NULL || strchr(string, letter) != NULL) {
        printf("You have already guessed the letter '%c'. Try a different letter.\n", letter);
        continue;
    }
    int count = 0;
    for (int i = 0; i < strlen(word[j]) ; i++) {
        if (word[j][i] == letter) {
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
        guess[n] = '\0';
    }
    if (strcmp(string, word[j]) == 0) {
        printf("Congratulations! You've guessed the word: %s\n", word[j]);
        break;
    }
    if (lives == 0) {
        printf("Game over! You've run out of lives. The word was: %s\n", word[j]);
    }
}
    return 0;
 }