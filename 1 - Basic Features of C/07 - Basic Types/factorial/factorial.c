/*
 * Programming Project 15: Factorial Calculator
 *
 * Write a program that calculates the factorial of a positive integer:
 * 
 * Enter a positive integer: 6
 * Factorial of 6: 720
 */

#include <stdio.h>

int main(void) {
    int n, i;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d: %lld\n", n, factorial);

    return 0;
}