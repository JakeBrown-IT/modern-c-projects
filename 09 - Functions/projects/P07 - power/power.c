/** Functions Project 07 - power.c */

#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int x, n;

    printf("Enter a value for x and n: ");
    scanf("%d %d", &x, &n);

    printf("%d^%d = %d\n", x, n, power(x, n));

    return 0;
}

int power(int x, int n)
{
    int result = 1;

    if (n == 0)
        return 1;
    else
        if (n % 2 == 0) {
            result = power(x, n / 2);
            return result * result;
        }
        else 
            return x * power(x, n - 1);
}
