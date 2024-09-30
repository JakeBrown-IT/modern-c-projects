/* File: proj_01.c
 * Author: Jake Brown
 * Created: 29-09-2024
 * Purpose: Section 13 Project 01
 */

#include <stdio.h>
#include <string.h>

#define MAXLEN 20

/* globals */
char smallest_word[MAXLEN + 1];
char largest_word[MAXLEN + 1];
char word[MAXLEN + 1];

/* functions */
void readWord(void);
void readFirst(void);
void readNext(void);

/* main */
int main(void) {
    readFirst();

    while (strlen(word) != 4)
        readWord();

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}

/* get a word from the user */
void readWord(void) {
    printf("Enter word: ");
    scanf("%20s", word);
}

/* get the first word from the user and initialise vars */
void readFirst(void) {
    readWord();

    strcpy(smallest_word, word);
    strcpy(largest_word, word);
}

/* get the next word from the user and compare */
void readNext(void) {
    readWord();

    if (strcmp(word, smallest_word) < 0)
        strcpy(smallest_word, word);
    else if (strcmp(word, largest_word) > 0)
        strcpy(largest_word, word);
}
