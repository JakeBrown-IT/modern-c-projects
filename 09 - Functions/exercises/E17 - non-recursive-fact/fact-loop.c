/* Functions Exercise 17 - fact-loop */

#include <stdio.h>

int fact(int n);

int main(void)
{
    printf("Factorial of 5: %d\n", fact(5));

    return 0;
}

int fact(int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        n *= i;
    }

    return n;
}