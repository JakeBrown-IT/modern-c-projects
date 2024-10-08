/* File: proj_09.c 
 * Author: Jake Brown
 * Created: 08-10-2024
 * Purpose: Section 13 Project 09
 */

#include <stdio.h>
#include <ctype.h>

#define STRLEN 50

int compute_vowel_count(const char *sentence);

int main(void) {
    char sentence[STRLEN + 1], ch;
    int n = 0;

    printf("Enter a sentence: ");
    
    while ((ch = getchar()) != '\n' && n < STRLEN)
        sentence[n++] = ch;

    sentence[n] = '\0';

    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

    return 0;
}

int compute_vowel_count(const char *sentence) {
    int vowels = 0;
    char ch;
    
    while (*sentence) {
        ch = toupper(*sentence);

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;
        
        sentence++;
    }

    return vowels;
}
