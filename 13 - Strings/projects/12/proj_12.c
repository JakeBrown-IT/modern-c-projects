/* File: proj_12.c
 * Author: Jake Brown
 * Created: 09-10-2024
 * Purpose: Section 13 Project 12
 */

#include <stdio.h>

#define WORDLEN 20
#define SENTLEN 30

int main(void) {
    char ch, term, sentence[SENTLEN][WORDLEN];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
 
    for (i = 0; i < SENTLEN; i++) {
        for (j = 0; j < WORDLEN; j++) {
            ch = getchar();

            if (ch == ' ')
                break;
            else if (ch == '.' || ch == '!' || ch == '?') {
                term = ch;
                break;
            }
            else
                sentence[i][j] = ch;
        }

        sentence[i][j] = '\0';

        if (ch == ' ')
            continue;
        else
            break; 
    }        

    printf("Reversal of sentence:");

    for (; i >= 0; i--)
        printf(" %s", sentence[i]);

    printf("%c\n", term);

    return 0;
}