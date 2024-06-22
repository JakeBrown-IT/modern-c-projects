/* Functions Exercise 13 - chess-position */

#include <stdio.h>
#include <ctype.h>

int evaluate_position(char board[8][8]);

int main(void)
{
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

    printf("Board Evaluation: %d\n", evaluate_position(board));

    return 0;
}

int evaluate_position(char board[8][8])
{
    int i = 0, j = 0, white = 0, black = 0;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            switch (board[i][j])
            {
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
    }

    return white - black;
}