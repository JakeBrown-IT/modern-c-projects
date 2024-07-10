/** Pointers Exercise 03 - avg-sum.c */

#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void) {
    double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double avg = 0, sum = 0;
    double *pAvg = &avg, *pSum = &sum;

    avg_sum(a, 5, pAvg, pSum);

    printf("Average: %lf  --  Sum: %lf\n", avg, sum);

    return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum) {
    int i;

    *sum = 0.0;

    for (i = 0; i < n; i++)
        *sum += a[i];
    
    *avg = *sum / n;
}