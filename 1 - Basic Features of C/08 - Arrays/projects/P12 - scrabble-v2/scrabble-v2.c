/* Section 8 Arrays - Project 12: scrabble-v2 */

#include <ctype.h>
#include <stdio.h>

int main(void) {

    int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int score = 0;
    char ch;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n') {
        score += values[toupper(ch) - 65];
    }

    printf("Score: %d\n", score);

    return 0;
}