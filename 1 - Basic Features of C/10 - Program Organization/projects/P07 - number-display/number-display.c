/** Program Organization Project 07 - number-display.c */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_DIGITS 10

/* Controls which segments are activated in the number */
int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},  // 0
    {0, 1, 1, 0, 0, 0, 0},  // 1
    {1, 1, 0, 1, 1, 0, 1},  // 2
    {1, 1, 1, 1, 0, 0, 1},  // 3
    {0, 1, 1, 0, 0, 1, 1},  // 4
    {1, 0, 1, 1, 0, 1, 1},  // 5
    {1, 0, 1, 1, 1, 1, 1},  // 6
    {1, 1, 1, 0, 0, 0, 0},  // 7
    {1, 1, 1, 1, 1, 1, 1},  // 8
    {1, 1, 1, 1, 0, 1, 1}   // 9 
};
/* Segments need to be converted to a 3x3 grid for display in the terminal */
int grid[7][2] = { {0, 1}, {1, 2}, {2, 2}, {2, 1}, {2, 0}, {1, 0}, {1, 1} };
char digits[4][MAX_DIGITS * 4];

/* Prototypes */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/* Main function */
int main(void) {
    char ch;
    int position = 0; 

    clear_digits_array();
    
    printf("Enter a number: ");

    while ((ch = getchar()) != '\n')
        if (isdigit(ch)) {
            process_digit(ch - '0', position);
            position += 4;
        }

    print_digits_array();

    return EXIT_SUCCESS;
}

/* Clears the digits array by filling with spaces */
void clear_digits_array(void) {
    int i, j;

    for (i = 0; i < 4; i++)
        for (j = 0; j < MAX_DIGITS * 4; j++)
            digits[i][j] = ' ';
}

/* Set the characters for display at the position in the digits array */
void process_digit(int digit, int position) {
    int i, row, col;

    for (i = 0; i < 7; i++) {
        if (segments[digit][i]) {
            row = grid[i][0];
            col = grid[i][1] + position;

            if (i % 3 == 0)
                digits[row][col] = '_';
            else
                digits[row][col] = '|';
        }
    }
}

/* Display the digits in the digits array */
void print_digits_array(void) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++)
            putchar(digits[i][j]);

        printf("\n");
    }
}
