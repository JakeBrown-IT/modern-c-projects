/* Arrays Project 14 - rev-sentence.c */

#include<stdio.h>

#define MAX_SIZE 100

int main(void) {
    char ch, term, sentence[MAX_SIZE] = {0};
    int i = 0, j = 0, tmp = 0;

    printf("Enter a sentence: ");

    while (i <= MAX_SIZE) {
        ch = getchar();

        if (ch == '.' || ch == '?' || ch == '!') {
            term = ch;
            break;
        } else {
            sentence[i++] = ch;
        }
    }

    printf("Reversal of sentence: ");

    j = i;

    for (; i >= 0; i--) {
        if (i == 0) {
            tmp = i;

            for (; tmp < j; tmp++) {
                printf("%c", sentence[tmp]);
            }
        }
        
        if (sentence[i] == ' ') {
            tmp = i + 1;

            for (; tmp < j; tmp++) {
                printf("%c", sentence[tmp]);
            }

            j = i;
            printf(" ");
        }
    }

    printf("%c\n", term);

    return 0;
}