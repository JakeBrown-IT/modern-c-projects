/** Section 11 Exercise 08
 * Author -- Jake Brown
 * Title  -- find-largest.c
 */

#include <stdio.h>

int *find_largest(int a[], int n);

int main(void) {
    int a[5] = {2, 1, 5, 4, 3};
    int n = 5, largest = 0;

    largest = *find_largest(a, n);

    printf("Largest: %d\n", largest);

    return 0;
}

int *find_largest(int a[], int n) {
    int i, *largest = &a[0];

    for (i = 0; i < n; i++) 
        if (a[i] > *largest)
           largest = &a[i];

    return largest;
}
