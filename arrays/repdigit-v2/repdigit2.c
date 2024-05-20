/* Programming Project 1
 * 
 * Modify the repdigit.c program of Section 8.1 so that it shows which
 * digits (if any) were repeated:
 * 
 * Enter a number: 939577
 * Repeated digit(s): 7 9
 * 
 * -- Thinking --
 * 
 * User only enters numbers 0-9 so 10 slots in the array, all set to 0.
 * Array is the counter for each digit.
 * Every time each digit it encountered, increment the corresponding
 * counter in the array.
 * Print any array slots respective digit if greater than one.
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
        digit = n % 10;

        digit_count[digit]++;

        n /= 10;
    }

    printf("Repeated Digits: ");
        
    for (int i = 0; i < 10; i++) {
        if (digit_count[i] > 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}