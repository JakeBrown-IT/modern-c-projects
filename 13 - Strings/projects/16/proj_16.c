/* File: proj_16.c
 * Author: Jake Brown
 * Created: 19-10-2024
 * Purpose: Section 13 Project 16
 */

#include <stdio.h>

#define MAX_LEN 30

void reverse(char *message);

int main(void) {
    char message[MAX_LEN];
    char *pArr = &message[0];
    char ch;

    int n = 0;

    printf("Enter a message: ");
    
    while ((ch = getchar()) != '\n' && n < MAX_LEN) {
        *pArr++ = ch;
        n++;
    }

    printf("Reversal is: ");

    for (; n >= 0; n--)
        printf("%c", *pArr--);
    
    printf("\n");

    return 0;
}

void reverse(char *message) {
    char ch, *p = message, *q = message;

    while (*q++)
        ;

    while (p != q) {
        ch = *p;
        *p++ = *q;
        *q-- = ch;
    }
}

