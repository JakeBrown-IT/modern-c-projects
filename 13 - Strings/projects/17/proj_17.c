/* File: proj_17.c
 * Author: Jake Brown
 * Created: 19-10-2024
 * Purpose: Section 13 Project 17
 */

#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX_LEN 20

bool is_palindrome(const char *message);

int main(void) {

    char msg[MAX_LEN];
    char ch, *p = msg;
    
    printf("Enter a message: ");
    
    while ((ch = getchar()) != '\n' && p < msg + MAX_LEN) {
        if (isalpha(ch))
            *p++ = tolower(ch);
    }
    p--;

    if (is_palindrome(msg))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

bool is_palindrome(const char *message) {
    const char *p, *q;

    p = q = message;

    while (*q)
        q++;
    q--;

    while (p < q) {
        if (*p != *q)
            return false;
        p++;
        q--;
    }

    return true;
}

