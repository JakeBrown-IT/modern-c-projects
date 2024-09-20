/* File: exer_04.c 
 * Author: Jake Brown
 * Created: 20-09-2024 
 * Purpose: Section 13 Exercise 04 
 */

#include <ctype.h>
#include <stdio.h>

#define STRLEN 100

int read_line(char str[], int n);

int main(void) {
    char *str;

    printf("Enter a sentence: ");
    read_line(str, STRLEN);
    
    puts(str);

    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    /* skip whitespace before actual characters */
    while (isspace(getchar())) 
        ;

    /* stop reading at first whitespace char and leave behind extra characters */
    while (i < n && (ch = getchar()) != '\n' && !isspace(ch))
        str[i++] = ch;
    
    /* stop reading at first newline char then store it in string */
    if (ch == '\n' && i < n - 1)
        str[i++] = '\n';

    /* store null character at end of string */
    str[i] = '\0';

    return i;
}

