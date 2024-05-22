/* Section 8: Arrays 
 * Project 6
 *
 * The prototypical Internet newbie is a fellow named B1FF, who
 * has a unique way of writing messages. Here's a typical B1FF
 * communique:
 * 
 * H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
 * 
 * Write a "B1FF filter" that reads a message entered by the 
 * user and translates it into B1FF-speak:
 * 
 * Enter message: Hey dude, C is rilly cool
 * In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
 * 
 * Your program should convert the message to upper-case letters,
 * substitute digits for certain letters (A -> 4, B -> 8, E -> 3,
 * I -> 1, O -> 0, S -> 5), and then append 10 or so exclamation
 * marks. Hint: Store the original message in an array of characters,
 * then go back through the array, translating and printing characters
 * one by one.
 * 
 * -- Thinking --
 * 
 * In C, you cannot dynamically increase the size of an array after it
 * is defined. Therefore we need to set a max size macro.
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(void) {
    
    char message[MAX_SIZE] = {0}, ch;
    int i = 0;

    printf("Enter message: ");

    while ((ch = getchar()) != '\n' && i < MAX_SIZE) {
        message[i++] = ch;
    }

    printf("In B1FF-speak: ");

    for (int j = 0; j < i; j++) {
        switch (toupper(message[j])) {
            case 'A':
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E':
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O':
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default:
                printf("%c", toupper(message[j]));
                break;
        }
    }

    for (int k = 0; k < 10; k++) {
        printf("!");
    }

    printf("\n");

    return 0;
}