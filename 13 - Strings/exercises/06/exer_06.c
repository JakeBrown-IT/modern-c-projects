/* File: exer_06.c 
 * Author: Jake Brown
 * Created: 21-09-2024
 * Purpose: Section 13 Exercise 06
 */

#include <stdio.h>

#define STRLEN 100

void censor(char str[]);

int main(void) {
    char ch, str[STRLEN + 1];
    int n;

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n' && n < STRLEN)
        str[n++] = ch;

    str[n] = '\0';

    censor(str);

    printf("Censored: %s\n", str);

    return 0;
}

void censor(char str[]) {
    int i = 0;

    while (str[i + 2] != '\0') {
        if (str[i] == 'f' && str[i+1] == 'o' && str[i+2] == 'o')
            str[i] = str[i+1] = str[i+2] = 'x';
        i++;
    }
}

