/* Arrays Project 17 - magic-square */

#include <stdio.h>

int main(void) {

    int i, j, count, i_prev, j_prev, n = 0;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");

    scanf("%d", &n);

    int square[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            square[i][j] = 0;
        }
    }

    i = n / 2;
    j = 0;
    square[i][j] = 1;

    count = 2;

    while (count <= n * n) {
        i_prev = i;
        j_prev = j;

        // set the correct i value
        if (i_prev + 1 >= n) {
            i = 0;
        } else {
            i = i_prev + 1;
        }

        // set the correct j value
        if (j_prev - 1 < 0) {
            j = n - 1;
        } else {
            j = j_prev - 1;
        }

        if (square[i][j] == 0) {
            square[i][j] = count++;
        } else {
            if (j_prev + 1 >= n) {
                square[i = i_prev][j = 0] = count++;
            } else {
                square[i = i_prev][j = j_prev + 1] = count++;
            }
        }
    }

    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            printf("%4d", square[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}