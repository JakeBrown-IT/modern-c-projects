/** Functions Project 08 - craps.c */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    int wins = 0, losses = 0;
    char play, ch;
    bool outcome;

    srand((unsigned) time(NULL));

    printf("Play some craps? ");
    play = getchar();

    while ((ch = getchar()) != '\n');

    if (tolower(play) == 'y') {
        while (tolower(play) == 'y') {
            outcome = play_game();            

            if (outcome) {
                printf("You win!\n");
                wins++;
            }
            else {
                printf("You lose!\n");
                losses++;
            }

            printf("Play again? ");
            play = getchar();

            while ((ch = getchar()) != '\n');
        }

        printf("Wins: %d\tLosses: %d\n", wins, losses);
    }    

    return 0;
}

int roll_dice(void) {
    int r1, r2;

    r1 = rand() % 6 + 1;
    r2 = rand() % 6 + 1;

    return r1 + r2;
}

bool play_game(void) {

    int dice = 0, point = 0;

    dice = roll_dice();

    printf("You rolled: %d\n", dice);

    if (dice == 7 || dice == 11)
        return true;
    else if (dice == 2 || dice == 3 || dice == 12)
        return false;
    else {
        point = dice;

        printf("Your point is: %d\n", point);
        
        while (1) {
            dice = roll_dice();

            printf("You rolled: %d\n", dice);

            if (dice == point)
                return true;
            else if (dice == 7)
                return false;

            dice = 0;
        }
    }     

}
