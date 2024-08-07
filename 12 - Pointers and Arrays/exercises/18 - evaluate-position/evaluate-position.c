/* Section 12 Exercise 18 
 * Author -- Jake Brown
 *  Title -- evaluate-position.c 
 */ 

#include <stdio.h>

int evaluate_position(char *pBoard);

int main(void) {

    // to save time we will use a random game on google images to evaluate
    char board[8][8] = {
        {'.', '.', '.', 'R', 'R', '.', 'K', '.'},
        {'.', 'p', 'Q', 'N', '.', 'B', 'B', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', 'P', '.', '.', '.', '.', '.'},
        {'P', '.', '.', 'N', 'n', 'n', '.', 'q'},
        {'p', '.', '.', '.', '.', '.', '.', '.'},
        {'.', 'P', 'P', '.', '.', '.', 'p', 'p'},
        {'.', 'k', '.', '.', 'r', 'r', '.', '.'}};

    char *pBoard = &board[0][0];

    printf("Board Evaluation: %d\n", evaluate_position(pBoard));

    return 0;
}

int evaluate_position(char *pBoard)
{
    int white = 0, black = 0, i;

    for (i = 0; i < 64; i++) {
        switch (*pBoard++) {
           case 'P':
                white++;
                break;
            case 'p':
                black++;
                break;
            case 'N':
                white += 3;
                break;
            case 'n':
                black += 3;
                break;
            case 'B':
                white += 3;
                break;
            case 'b':
                black += 3;
                break;
            case 'R':
                white += 5;
                break;
            case 'r':
                black += 5;
                break;
            case 'Q':
                white += 9;
                break;
            case 'q':
                black += 9;
                break;
            default:
                break;
        }
    }

    return white - black;
}
