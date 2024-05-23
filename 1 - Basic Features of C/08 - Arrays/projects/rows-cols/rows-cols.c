/* Section 8: Arrays 
 * Project 7
 *
 * Write a program that reads a 5 x 5 array of integers and then
 * prints the row sums and the column sums:
 * 
 * Enter row 1: 8 3 9 0 10
 * Enter row 2: 3 5 17 1 1
 * Enter row 3: 2 8 6 23 1
 * Enter row 4: 15 7 3 2 9
 * Enter row 5: 6 14 2 6 0
 * 
 * Row totals: 30 27 40 36 28
 * Column totals: 34 37 37 32 21
 */

#include <stdio.h>

#define COLUMNS 5
#define ROWS 5

int main(void) {
    int arr[ROWS][COLUMNS] = {0}, total = 0;

    // iterate over rows
    for (int i = 0; i < ROWS; i++) {
        printf("Enter row %d: ", i + 1);
        // iterate over columns, to fill each slot up
        for (int j = 0; j < COLUMNS; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Row totals:");

    for (int i = 0; i < ROWS; i++) {
        total = 0;

        for (int j = 0; j < COLUMNS; j++) {
            total += arr[i][j];
        }

        printf(" %d", total);
    }

    printf("\nColumn totals:");

    for (int i = 0; i < COLUMNS; i++) {
        total = 0;

        for (int j = 0; j < ROWS; j++) {
            total += arr[j][i];
        }

        printf(" %d", total);
    }

    printf("\n");

    return 0;
}