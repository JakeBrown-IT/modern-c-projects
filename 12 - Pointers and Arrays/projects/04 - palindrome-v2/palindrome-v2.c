/* Section 12 Project 04
 * Author -- Jake Brown
 *  Title -- palindrome-v2.c
 */

#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 20

int main(void) {

    char msg[MAX_LEN];
    char ch;
    char *pI = msg, *pJ = msg;
    
    printf("Enter a message: ");
    
    while ((ch = tolower(getchar())) != '\n' && pI < msg + MAX_LEN)
        if (isalpha(ch))
            *pI++ = ch;
    pI--;

    for (pJ = msg; pJ < pI; pJ++, pI--)
        if (*pI != *pJ) {
            printf("Not a palindrome\n");
            return 0;
        }

    printf("Palindrome\n");

    return 0;
}
