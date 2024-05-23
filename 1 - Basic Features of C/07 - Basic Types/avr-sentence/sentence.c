/*
 * Programming Project 13: Average word length in a sentence
 *
 * Write a program that calculates the average word length for a sentence:
 * Enter a sentece: It was deja vu all over again.
 * Average word length: 3.4
 * 
 * For simplicity, your program should consider a punctuation mark to be part of the word to
 * which it is attached. Display the average word length to one decimal place.
*/

#include <stdio.h>

int main(void) {
    char ch;
    float words, letters;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            words++;
        } else {
            letters++;
        }
    }

    printf("Words: %.0f\n", words+1);
    printf("Letters: %.0f\n", letters);

    printf("Average word length: %.1f\n", letters / (words + 1));

    return 0;
    
}