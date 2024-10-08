/* File: proj_08.c 
 * Author: Jake Brown
 * Created: 08-10-2024
 * Purpose: Section 13 Project 08 
 */

#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(void) {
    char *word;

    printf("Enter a word: ");
    scanf("%s", word);

    printf("Score: %d\n", compute_scrabble_value(word));
    
    return 0;
}

int compute_scrabble_value(const char *word) {

    int score = 0;

    while (*word) {
        char ch = toupper(*word++);
        switch (ch) {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                score++;
                break;
            case 'D':
            case 'G':
                score += 2;
                break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                score += 3;
                break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                score += 4;
                break;
            case 'K':
                score += 5;
                break;
            case 'J':
            case 'X':
                score += 8;
                break;
            case 'Q':
            case 'Z':
                score += 10;
                break;
            default:
                break;
        }
    }

    return score;
}

