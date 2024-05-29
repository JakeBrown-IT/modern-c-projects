/* Arrays Project 13 - initials-v2.c */

#include <stdio.h>

int main(void) {

    char ch, fi, lname[20];

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
    int i = 0;
    while ((ch = getchar()) != '\n') {
        lname[i++] = ch;
    }

    for (int j = 0; j < i; j++) {
        printf("%c", lname[j]);
    }
    printf(", %c.\n", fi);

    return 0;
}