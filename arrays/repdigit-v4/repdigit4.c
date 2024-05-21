/* Programming Project 3
 * 
 * Modify the repdigit.c program of Section 8.1 so that the user can enter more than
 * one number to be tested for repeated digits. The program should terminate when
 * the user enteres a number that's less than or equal to 0.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int digit_count[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0) {
        while (n > 0) {
            digit = n % 10;

            digit_count[digit]++;

            n /= 10;
        }

        printf("Digit:       ");

        for (int i = 0; i < 10; i++) {
            printf("%d  ", i);
        }
        printf("\n");

        printf("Occurances:  ");

        for (int i = 0; i < 10; i++) {
            printf("%d  ", digit_count[i]);
        }

        printf("\n");

        // reset array to zero for next number
        for (int i = 0; i < 10; i++) {
            digit_count[i] = 0;
        }

        printf("Enter a number: ");
        scanf("%ld", &n);
    }

    return 0;
}