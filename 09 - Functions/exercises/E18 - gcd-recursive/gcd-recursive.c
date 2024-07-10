/* Functions Exercise - gcd recursive */

#include <stdio.h>

int gcd(int n, int m);

int main(void)
{
    printf("GCD of 10 and 2: %d\n", gcd(10, 2));

    return 0;
}

int gcd(int n, int m)
{
    return n == 0 ? m : gcd(m % n, m);
}
