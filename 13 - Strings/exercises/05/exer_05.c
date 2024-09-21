/* File: exer_05.c 
 * Author: Jake Brown 
 * Created: 20-09-2024
 * Purpose: Section 13 Exercise 05
 */

#include <ctype.h>
#include <stdio.h>

#define STRLEN 100

void capitalize(char *str);

int main(void) {
    char str[STRLEN+1], ch;
    char *s = &str[0];
    int n;
    
    printf("Enter a string: ");
    
    while ((ch = getchar()) != '\n')
        str[n++] = ch;

    capitalize(s);

    printf("Capitalized string: %s\n", s);

    return 0;
}

void capitalize(char *str) {
    while (*str != '\0') {
        if (isalpha(*str))
           *str = toupper(*str);
        str++;
    }
}

