/** Section 11 Project 03
 * Author -- Jake Brown
 * Title  -- reduce.c
 */

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void) {

    int numerator, denominator, reduced_numerator, reduced_denominator;
    int *pReduced_numerator = &reduced_numerator, *pReduced_denominator = &reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, pReduced_numerator, pReduced_denominator);

    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
    int m = numerator, n = denominator, tmp;

    while (n > 0) {
        tmp = m % n;
        m = n;
        n = tmp;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}
