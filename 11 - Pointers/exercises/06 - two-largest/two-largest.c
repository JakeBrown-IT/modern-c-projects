/** Section 11 Exercise 06
 * Author -- Jake Brown
 * Title  -- two-largest.c
 */

#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int a[5] = {3, 2, 5, 1, 4};
    int n = 5, largest = -1, secondLargest = -1;
    int *pLargest = &largest, *pSecondLargest = &secondLargest;

    find_two_largest(a, n, pLargest, pSecondLargest);

    printf("Largest: %d  --  Second Largest: %d\n", largest, secondLargest);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] > *largest)
            *largest = a[i];

    for (i = 0; i < n; i++)
    {
        if (a[i] == *largest)
            continue;
        else if (a[i] > *second_largest)
            *second_largest = a[i];
    }
}