/* Arrays Project 11 - alpha-phone-v2 */

#include <stdio.h>

int main(void) {
    int i = 0;  
    char phone[15], ch;

    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n') {

        switch (ch) {
            case 'A': case 'B': case 'C':
                phone[i++] = '2';
                break;
            case 'D': case 'E': case 'F':
                phone[i++] = '3';
                break;
            case 'G': case 'H': case 'I':
                phone[i++] = '4';
                break;
            case 'J': case 'K': case 'L':
                phone[i++] = '5';
                break;
            case 'M': case 'N': case 'O':
                phone[i++] = '6';
                break;
            case 'P': case 'R': case 'S':
                phone[i++] = '7';
                break;
            case 'T': case 'U': case 'V':
                phone[i++] = '8';
                break;
            case 'W': case 'X': case 'Y':
                phone[i++] = '9';
                break;
            default:
                phone[i++] = ch;
                break;
        }
    }

    printf("In numberic form: ");

    for (int j = 0; j < i; j++) {
        printf("%c", phone[j]);
    }

    printf("\n");

    return 0;
}