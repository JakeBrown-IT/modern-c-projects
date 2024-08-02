/* Section 12 Exercise 12
 * Author -- Jake Brown
 *  Title -- find-two-largest.c
 */

#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int a[5] = {1, 5, 3, 4, 2};
    int n = 5,
        largest = -1,
        second_largest = -1;
    int *pLargest = &largest,
        *pSecondLargest = &second_largest,
        *pA = &a[0];

    find_two_largest(pA, n, pLargest, pSecondLargest);

    printf("Two Largest: %d, %d\n", largest, second_largest);

    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (*a > *largest)
            *largest = *a;
        a++;
    }

    for (; i > 0; i--)
    {
        if (*a == *largest)
            continue;
        else if (*a > *second_largest)
            *second_largest = *a;
        a--;
    }
}
