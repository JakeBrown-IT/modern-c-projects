/* Programming Project 9 - Random Walk 
 *
 * Randomly walk across a 10x10 array from A-Z
 * If no available spaces to travel, we terminate early.
 */


#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

#define XDIM 10
#define YDIM 10

int main(void) {
    char board[YDIM][XDIM] = {{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}};
    
    char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                        'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                        'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
                        'Y', 'Z'};

    // arrays are [y, x]
    int position[2] = {0, 0};
    int target[2] = {0, 0};

    int direction;
    bool valid_move;
    
    srand((unsigned) time(NULL));

    board[0][0] = letters[0];

    printf("Current Position -> (0, 0) : %c\n", board[0][0]);

    // loop iterates over letters array
    for (int i = 1; i < 26; i++) {
        direction = rand() % 4;
        
        switch (direction) {
            case 0:
            // up -> POSITION + (0, -1)
                target[0] = position[0] - 1;
                printf("New Direction -> Up // Target -> (%d, %d)\n", target[0], target[1]);
                break;
            case 1:
            // down -> POSITION + (0, 1)
                target[0] = position[0] + 1;
                printf("New Direction -> Down // Target -> (%d, %d)\n", target[0], target[1]);
                break;
            case 2:
            // left -> POSITION + (-1, 0)
                target[1] = position[1] - 1;
                printf("New Direction -> Left // Target -> (%d, %d)\n", target[0], target[1]);
                break;
            case 3:
            // right -> POSITION + (1, 0)
                target[1] = position[1] + 1;
                printf("New Direction -> Right // Target -> (%d, %d)\n", target[0], target[1]);
                break;
        }
        // if the target position is outside of the array then print debug message and continue
        if (target[0] < 0 || target[0] > 10 || target[1] < 0 || target[1] > 10) {
            printf("Target Position (%d, %d) is out of array range.\n", position[0] + target[0], position[1] + target[1]);
            continue;
        } 
        // if the target position is already occupied then print debug message and continue
        else if (sizeof(board[target[0]][target[1]] != sizeof('.'))) {
            printf("Target Position (%d, %d) already occupied.\n", position[0] + target[0], position[1] + target[1]);
            continue;
        } 
        // otherwise, assign the current letter to the target position
        else {
            board[target[0]][target[1]] = letters[i];
            
            printf("Board (%d, %d) -> %c\n", target[0], target[1], letters[i]);
            
            position[0] = target[0];
            position[1] = target[1];

            printf("Current Position -> (%d, %d) : %c\n", position[0], position[1], letters[i]);
        }

        // reset target position
        target[0] = position[0];
        target[1] = position[1];

        // print the board
        for (int i = 0; i < YDIM; i++) {
            for (int j = 0; j < XDIM; j++) {
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }
    
    }

    // print the board
    for (int i = 0; i < YDIM; i++) {
        for (int j = 0; j < XDIM; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}