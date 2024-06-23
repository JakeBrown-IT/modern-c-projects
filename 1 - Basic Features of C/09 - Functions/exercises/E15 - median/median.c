/* Functions Exercise 15 - median */

#include <stdio.h>

double median(double x, double y, double z);

int main(void)
{
    double x, y, z;

    printf("Enter 3 doubles: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("Median: %lf\n", median(x, y, z));

    return 0;
}

double median(double x, double y, double z)
{
    double min, max;

    if (x < y)
        min = x;
    else
        min = y;

    if (z < min)
        min = z;

    if (x > y)
        max = x;
    else
        max = y;

    if (z > max)
        max = z;

    return x + y + z - min - max;
}