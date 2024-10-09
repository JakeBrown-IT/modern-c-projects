/* File: proj_10.c 
 * Author: Jake Brown
 * Created: 09-10-2024
 * Purpose: Section 13 Project 10
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STRLEN 51

void reverse_name(char *name);

int main(void) {
    char name[STRLEN];

    printf("Enter a first and last name: ");
    fgets(name, STRLEN, stdin);

    reverse_name(name);

    return 0;
}

void reverse_name(char *name) {
    char initial, *s = name;

    /* ignore all spaces before first character */
    while (*s == ' ')
        s++;

    initial = *s++;

    /* move pointer past forename */
    while (*s && *s != ' ')
        s++;

    /* move pointer to beginning of surname */
    while (*s && *s == ' ')
        s++;

    while (*s && *s != '\n' && *s != ' ')
        putchar(*s++);
    
    printf(", %c.\n", initial);
}
