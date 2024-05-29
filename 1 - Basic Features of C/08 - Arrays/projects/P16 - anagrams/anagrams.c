/* Arrays Project 16 - anagrams */

#include <stdio.h>
#include <ctype.h>

int main(void) {

    int seen[26] = {0};
    char ch;

    printf("Enter first word: ");

    while ((ch = getchar()) != '\n') {
        seen[tolower(ch) - 'a']++;
    }

    printf("Enter second word: ");

    while ((ch = getchar()) != '\n') {
        seen[tolower(ch) - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (seen[i] != 0 ) {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }

    printf("The words are anagrams.\n");

    return 0;
}