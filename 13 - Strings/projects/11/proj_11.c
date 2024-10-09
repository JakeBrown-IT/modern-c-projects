/* File: proj_11.c
 * Author: Jake Brown
 * Created: 09-10-2024
 * Purpose: Section 13 Project 11
 */

#include <stdio.h>

#define STRLEN 51

double compute_average_word_length(const char *sentence);

int main(void) {
    char sentence[STRLEN];
    float average;
    int n;

    printf("Enter a sentence: ");

    fgets(sentence, STRLEN, stdin);

    printf("Average Word Length: %.1f\n", compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence) {
    double lc = 0, wc = 0;

    while (*sentence != '\n') {
        if (*sentence == ' ')
            wc++;
        else
            lc++;
        sentence++;
    }   

    return lc / (wc + 1);
}
