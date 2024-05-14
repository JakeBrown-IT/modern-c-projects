/*
 * Programming Project 10: Vowel Counter
 *
 * Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:
 * Enter a sentence: And that's the way it is.
 * Your sentence contains 6 vowels.
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int vowels = 0;
    char ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
    }

    printf("Your sentence contains %d vowels.\n", vowels);

    return 0;
}