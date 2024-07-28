/* Section 12 Exercise 09
 * Author -- Jake Brown
 * Title  -- inner-product.c
 */

#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(void) {
    int n = 5, i;
    double a[] = {1.1, 2.2, 3.3, 4.4, 5.5}, b[] = {5.5, 4.4, 3.3, 2.2, 1.1};
    double *ptr_a = &a[0], *ptr_b = &b[0];
    
    printf("( ");
    for (i = 0; i < n; i++)
        printf("%lf ", a[i]);

    printf(" ) * ( ");
    for (i = 0; i < n; i++)
        printf("%lf ", b[i]);

    printf(" ) = %lf\n", inner_product(ptr_a, ptr_b, n));

    return 0;
}

double inner_product(const double *a, const double *b, int n) {
    double result = 0;

    for (; n > 0; n--)
        result += (*a++ * *b++);

    return result;
}

