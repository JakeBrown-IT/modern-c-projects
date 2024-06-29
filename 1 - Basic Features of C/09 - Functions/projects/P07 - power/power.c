/** Functions Project 07 - power.c */

#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int x, n;

    printf("Enter a value for x and n: ");
    scanf("%d %d", &x, &n);

    printf("x^n = %d\n", power(x, n));

    return 0;
}

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        if (n % 2 == 0)
            x = 
}