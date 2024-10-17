/* File: proj_14.c
 * Author: Jake Brown
 * Created: 17-10-2024
 * Purpose: Section 13 Project 14
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STRLEN 20

bool are_anagrams(const char *word1, const char *word2);

int main(void) {
    char word1[STRLEN + 1], word2[STRLEN + 1], ch;
    int seen[26] = {0};

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);

    if (are_anagrams(word1, word2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2) {
    char seen[26] = {0};
    int i;

    while (*word1 && *word2) {
        seen[tolower(*word1++) - 'a']++;
        seen[tolower(*word2++) - 'a']--;
    }

    for (i = 0; i < 26; i++)
        if (seen[i] != 0)
            return false;
    
    return true;
}