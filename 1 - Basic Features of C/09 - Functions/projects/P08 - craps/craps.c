/** Functions Project 08 - craps.c */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    int wins = 0, losses = 0;

    srand((unsigned) time(NULL));

    return 0;
}

int roll_dice(void) {
    int r1, r2;

    srand((unsigned) time(NULL));

    r1 = rand() % 6;
    r2 = rand() % 6;

    return r1 + r2;
}

/**
 * if turn is 0 and roll is 7 or 11 -> player wins
 * if turn is 0 and roll is 2 3 or 12 -> player loses
 * else 
 * 
 */


bool play_game(void) {

    char replay = 'y';
    int dice, turn = 0;

    while (tolower(replay) != 'y') {
        dice = roll_dice();

        printf("You rolled: %d\n", dice);

        if (turn == 0) {
            if (dice == 7 || dice == 11) {
                printf("You win!\n");
                return true;
            }
            else if (dice == 2 || dice == 3 || dice == 12) {
                printf("You lose!\n");
                return false;
            }
        } 
    }

}
