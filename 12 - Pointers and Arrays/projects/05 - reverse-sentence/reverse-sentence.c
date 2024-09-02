/* Section 12 Project 05
 * Author -- Jake Brown
 *  Title -- reverse-message.c
 */

#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    char ch, term, sentence[MAX_SIZE] = {0}, *p, *q;

    printf("Enter a sentence: ");

    for (p = sentence; (ch = getchar()) != '\n' && p < sentence + MAX_SIZE; p++) {
        if (ch == '.' || ch == '?' || ch == '!') {
            term = ch;
            break;
        }
        *p = ch;
    }

    printf("Reversal of sentence: ");
    // while p is not at beginning of the sentence
    while (p >= sentence) {
        // we need to find the beginning of the last word
        // so we decrement p and break if it is a space or it's at index 0
        while (*--p != ' ' && p != sentence)
            ;   
        // set q to the start of the next word
        if (p == sentence)
            q = sentence;
        else
            q = p + 1;

        // while q is not at end of word and not end of string
        while (*q != ' ' && *q != '\0')
            putchar(*q++);  // print character and increment q        

        // if p is not at index 0, print a space for the next word
        if (p >= sentence)
            putchar(' ');
    }

    // finally print the terminating character of the sentence
    printf("\b%c\n", term);

    return 0;
}