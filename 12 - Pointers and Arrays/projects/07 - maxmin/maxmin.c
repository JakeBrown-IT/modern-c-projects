/* Section 12 Project 07
 * Author -- Jake Brown
 *  Title -- maxmin.c
 */  

#include <stdio.h>

#define N 10

void max_min(int b[N], int n, int *max, int *min);

int main(void)
{
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);

    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

/** Address of big and small is passed in to the pointers max and min
 * so their values can be changed.
 */
void max_min(int b[N], int n, int *max, int *min)
{
    int *p;

    *max = *min = b[0];

    for (p = b + 1; p < b + N; p++)
    {
        if (*p > *max)
            *max = *p;
        else if (*p < *min)
            *min = *p;
    }
}
