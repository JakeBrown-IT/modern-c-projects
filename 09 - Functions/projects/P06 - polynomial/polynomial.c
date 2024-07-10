/** Functions Project 96 - polynomial.c */

#include <stdio.h>
#include <math.h>

int polynomial(int x);

int main(void)
{
    int x, result;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    result = polynomial(x);

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6  ...  where x = %d,\n = %d\n", x, result);

    return 0;
}

int polynomial(int x)
{
    return (3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - pow(x, 2) + (7 * x) - 6;
}