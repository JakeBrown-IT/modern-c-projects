/* File: proj_01.c
 * Author: Jake Brown
 * Created: 29-09-2024
 * Purpose: Section 13 Project 01
 */

#include <stdio.h>
#include <string.h>

#define MAXLEN 20

int main(void) {
    char smallest_word[MAXLEN], largest_word[MAXLEN];
    char *word;

    while (1) {
        printf("Enter word: ");
        scanf("%s", word);

        if (strlen(word) < strlen(smallest_word))
            strcpy(smallest_word, word);

        if (strlen(word) > strlen(largest_word))
            strcpy(largest_word, word);

        if (strlen(word) == 4)
            break;
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}
