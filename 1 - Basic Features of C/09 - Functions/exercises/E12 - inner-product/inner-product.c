/* Functions Exercise 11 */

#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(void)
{
    int n, i = 0;
    double a[100] = {0}, b[100] = {0};

    printf("Enter number of elements in arrays: ");
    scanf("%d", &n);

    printf("Enter %d values for array a: ");
    for (; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }

    printf("Enter %d values for array b: ");
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &b[i]);
    }

    printf("Inner Product of a.b: %.2lf\n", inner_product(a, b, n));

    return 0;
}

double inner_product(double a[], double b[], int n)
{
    double result = 0;
    int i = 0;

    for (; i < n; i++)
    {
        result += (a[i] * b[i]);
    }
    return result;
}