/* Programming Project 08 
 *
 * calculate average scorefor each student
 * 
 * Student No.  |  1  |  2  |  3  |  4  |  5 
 * Avr. Score   |  -  |  -  |  -  |  -  |  -
 * Total Score  |  -  |  -  |  -  |  -  |  -
 * 
 * calculate average, highest, and lowest score for each quiz
 *  
 * Quiz No.    |  1  |  2  |  3  |  4  |  5
 * Avr. Score  |  -  |  -  |  -  |  -  |  -
 * High Score  |  -  |  -  |  -  |  -  |  -
 * Low Score   |  -  |  -  |  -  |  -  |  -
 */

#include <stdio.h>

#define STUDENTS 5
#define SCORES 5

int main(void) {
    int grades[STUDENTS][SCORES] = {0};

    // iterate over rows
    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter row %d: ", i + 1);
        // iterate over columns, to fill each slot up
        for (int j = 0; j < SCORES; j++) {
            scanf("%d", &grades[i][j]);
        }
    }

    return 0;
}