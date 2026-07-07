//code is stil incomplete and needs to be completed
//enter position even on computer turn 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    char a[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}},pos;
    int players;
    printf("Welcome to Tic Tac Toe!\n The board is numbered as follows:\n Enter number of players (1 or 2): ");
    scanf("%d", &players);
    switch (players)
    {
    case 2:
        printf("Player 1 is X and Player 2 is O.\n");
   for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");}
while (a[0][0] == '1' ||
       a[0][1] == '2' ||
       a[0][2] == '3' ||
       a[1][0] == '4' ||
       a[1][1] == '5' ||
       a[1][2] == '6' ||
       a[2][0] == '7' ||
       a[2][1] == '8' ||
       a[2][2] == '9')
{  
    printf("Enter a position (1-9): \n");
    scanf(" %c",&pos);
     int countx=0,counto=0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j]=='X')
            {countx++;}
            else if (a[i][j]=='O')
            {counto++;
            }
        }
    }{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (pos == a[i][j]) {
                if (countx > counto)
                    a[i][j] = 'O';
                else
                a[i][j] = 'X';
            }
           
        }
    }}
    if((a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') ||
       (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') ||
       (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') ||
       (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') ||
       (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') ||
       (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') ||
       (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') ||
       (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')) {
        printf("Player X wins!\n");
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");}
        break;
    } else if ((a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') ||
               (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') ||
               (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') ||
               (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') ||
               (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') ||
               (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') ||
               (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') ||
               (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')) {
        printf("Player O wins!\n");
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");}
        break;
    }

for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");}
}
break;
    case 1://still working
        printf("Player is X and Computer is O.\n");
        srand(time(NULL));
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");}
        while (a[0][0] == '1' ||
       a[0][1] == '2' ||
       a[0][2] == '3' ||
       a[1][0] == '4' ||
       a[1][1] == '5' ||
       a[1][2] == '6' ||
       a[2][0] == '7' ||
       a[2][1] == '8' ||
       a[2][2] == '9')
{  
    printf("Enter a position (1-9): \n");
    scanf(" %c",&pos);
     int countx=0,counto=0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j]=='X')
            {countx++;}
            else if (a[i][j]=='O')
            {counto++;
            }
        }
    }
   if(countx > counto)
    {
        while (1) {
            int randomPos = rand() % 9 + 1;
            int found = 0;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (a[i][j] == randomPos + '0') {
                        a[i][j] = 'O';
                        found = 1;
                        break;
                    }
                }
                if (found) break;
            }
            if (found) break;
        }
    }
    else{
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
        {if (pos == a[i][j]) 
                 a[i][j] = 'X';}}
            
    }
     if((a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') ||
       (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') ||
       (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') ||
       (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') ||
       (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') ||
       (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') ||
       (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') ||
       (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')) {
        printf("Player X wins!\n");
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");}
        break;
    } else if ((a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') ||
               (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') ||
               (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') ||
               (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') ||
               (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') ||
               (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') ||
               (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') ||
               (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')) {
        printf("Player O wins!\n");
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");}
        break;
    }

for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");}
    }
    break;
default:
        printf("Invalid number of players. Please enter 1 or 2.\n");
        break;
    }

    // add draw case
/*add computer logic(human vs computer) using random function
rand() in <stdlib.h>*/
    return 0;
}