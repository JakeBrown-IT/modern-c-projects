/* Arrays Project 15 - caesar-cipher */

#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(void) {

    char ch, message[MAX_SIZE] = {0};
    int shift, i = 0;

    printf("Enter message to be encrypted: ");

    while ((ch = getchar()) != '\n') {
        message[i++] = ch;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");

    for (int j = 0; j < i; j++) {
        if (isalpha(message[j])) {
            if (isupper(message[j])) {
                printf("%c", ((message[j] - 'A') + shift) % 26 + 'A');
            } else {
                printf("%c", ((message[j] - 'a') + shift) % 26 + 'a');
            }
        } else {
            printf("%c", message[j]);
        }
    }

    printf("\n");

    return 0;
}