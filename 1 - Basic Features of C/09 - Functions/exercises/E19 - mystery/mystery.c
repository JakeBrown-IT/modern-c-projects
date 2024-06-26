/* Functions Exercise 19 - mystery.c
 *
 * If we call the function, passing in a 5 as n. If n is not equal to zero, then the function will
 * recursively call itself using n / 2 as the parameter. After dividing enough times to reach zero,
 * the function will then recursively print the integer n % 2, which will either be a one or zero,
 * leading to the output showing the binary representation of n.
 *
 */

#include <stdio.h>

void pb(int n);

int main(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    pb(n);

    printf("\n");

    return 0;
}

void pb(int n)
{
    if (n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
