/* Programming Project 9 - Random Walk 
 *
 * Randomly walk across a 10x10 array from A-Z
 * If no available spaces to travel, we terminate early.
 * 
 * Characters can be incremented, so there is no need
 * for a character array of the alphabet.
 * 
 * Original approach was using a coordinates approach, which proved too slow
 * and complicated, so instead I have used the code from  William G Herman's GitHub
 * repository and commented to explain some areas.
 */


#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {

    char letter = 'A'; 
    char grid[10][10] = {0};  // 10x10 grid -> (y, x) 

    int i = 0,
        j = 0,
        up = 0,
        down = 0,
        left = 0,
        right = 0,
        move = 0;

    srand((unsigned) time(NULL));

    grid[i][j] = letter++;  // increment letter to get next one

    while (letter <= 'Z') {
        up = down = left = right = move = 0;

        // this checks what direction the next letter can be placed in
        if (j + 1 < 10 && grid[i][j + 1] == 0)
            up = 1;
        if (j - 1 >= 0 && grid[i][j - 1] == 0)
            down = 1;
        if (i + 1 < 10 && grid[i + 1][j] == 0)
            right = 1;
        if (i - 1 >= 0 && grid[i - 1][j] == 0)
            left = 1;

        if (up + down + left + right == 0)
            break;

        move = rand() % 4;
        

        /* Intentional fallthrough if direction fails */
        switch(move) {
            case 0:
                if (up) {
                    grid[i][++j] = letter++;
                    break;
                }
            case 1:
                if (down) {
                    grid[i][--j] = letter++;
                    break;
                }
            case 2:
                if (right) {
                    grid[++i][j] = letter++;
                    break;
                }
            case 3:
                if (left) {
                    grid[--i][j] = letter++;
                    break;
                }
            default:
                break;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (grid[i][j] == 0) 
                grid[i][j] = '.';
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

    
    