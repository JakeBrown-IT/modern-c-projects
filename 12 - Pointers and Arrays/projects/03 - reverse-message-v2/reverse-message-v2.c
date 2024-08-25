/* Secton 12 Project 03
 * Author -- Jake Brown
 *  Title -- reverse-message-v2.c
 */

#include <stdio.h>

#define MAX_LEN 30

int main(void) {
    char message[MAX_LEN];
    char ch;

    int n = 0;

    printf("Enter a message: ");
    
    while ((ch = getchar()) != '\n' && n < MAX_LEN)
        *(message + n++) = ch;

    printf("Reversal is: ");

    for (; n >= 0; n--)
        printf("%c", *(message + n));
    
    printf("\n");

    return 0;
}

