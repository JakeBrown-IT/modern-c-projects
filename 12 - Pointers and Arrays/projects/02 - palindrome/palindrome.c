/* Section 12 Project 02
 * Author -- Jake Brown
 *  Title -- palindrome.c
 */

#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX_LEN 20

bool is_palindrome(char *pI, char *pJ);

int main(void) {

    char msg[MAX_LEN];
    char ch;
    char *pI = msg, *pJ = msg;
    
    printf("Enter a message: ");
    
    while ((ch = getchar()) != '\n' && pI < msg + MAX_LEN) {
        if (isalpha(ch))
            *pJ++ = tolower(ch);
    }
    pJ--;

    if (is_palindrome(pI, pJ))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

bool is_palindrome(char *pI, char *pJ) {
    while (pI < pJ)
        if (*pI++ != *pJ--)
            return false;

    return true;
}

