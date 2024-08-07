/* Section 12 Project 01
 * Author -- Jake Brown
 *  Title -- reverse-message.c 
 */ 

#include <stdio.h>

#define MAX_LEN 30

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

