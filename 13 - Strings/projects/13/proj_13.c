/* File: proj_13.c 
 * Author: Jake Brown
 * Created: 16-10-2024
 * Purpose: Section 13 Exercise 13
 */ 

#include <stdio.h>
#include <ctype.h>

#define STRLEN 101

void encrypt(char *message, int shift);

int main(void) {
    char ch;
    int shift, i = 0;
    
    char message[STRLEN];
    
    printf("Enter message to encrypt: ");
    fgets(message, STRLEN, stdin);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    encrypt(message, shift);

    printf("\n");
    
    return 0; 
}

void encrypt(char *message, int shift) {
    char *s = message;

    while (*s) {
        if (isalpha(*s)) {
            if (isupper(*s))
                printf("%c", ((*s - 'A') + shift) % 26 + 'A');
            else
                printf("%c", ((*s - 'a') + shift) % 26 + 'a');
        } else
            printf("%c", *s);

        s++;
    }
}
