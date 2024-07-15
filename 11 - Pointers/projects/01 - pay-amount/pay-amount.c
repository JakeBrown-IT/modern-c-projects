/** Section 11 Project 01
 * Author -- Jake Brown
 * Title  -- pay-amount.c
 */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
    int dollars, twenties, tens, fives, ones;
    int *pTwenties = &twenties,
        *pTens = &tens,
        *pFives = &fives,
        *pOnes = &ones;

    printf("Enter an amount of dollars: $");
    scanf("%d", &dollars);

    pay_amount(dollars, pTwenties, pTens, pFives, pOnes);

    printf("Twenties: %d\n", twenties);
    printf("Tens: %d\n", tens);
    printf("Fives: %d\n", fives);
    printf("Ones: %d\n", ones);
    
    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollars / 20;
    dollars  -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 10;

    *fives = dollars / 5;
    dollars -= *fives * 5;

    *ones = dollars;
}
