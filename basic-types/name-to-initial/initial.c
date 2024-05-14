/*
 * Programming Project 11: Name to Initial Converter
 *
 * Write a program that takes a first name and last name entered by the
 * user and displays the last name, a comma, and the first initial, 
 * followed by a period.
 * 
 * Enter a first and last name: Lloyd Fosdick
 * Fosdick, L.
 * 
 * -- Thinking --
 * 
 * We store the first initial in its own character variable, then we skip until a space
 * Then we skip until we see another letter.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {

    char ch, fi;

    printf("Enter a first and last name: ");
    
    // get the first letter, while skipping over any whitespace
    while (1) {
        fi = getchar();
        if (fi != ' ') {
            while ((ch = getchar()) != ' ') {
                continue;
            }
            break;
        }
    }

    // get the last name, while skipping over the rest of the first name,
    // and any whitespace before the last name
    while ((ch = getchar()) != '\n') {
        putchar(ch);
    }
    printf(", %c.\n", fi);

    return 0;
}