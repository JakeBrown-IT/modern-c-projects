/* Section 12 Exercise 11
 * Author -- Jake Brown
 * Title  -- find-largest.c
 */

#include <stdio.h>

int *find_largest(int *ptr_a, int n);

int main(void)
{
    int a[5] = {2, 1, 5, 4, 3};
    int *ptr_a = &a[0];
    int n = 5;

    printf("Largest in array: %d\n", *find_largest(ptr_a, n));

    return 0;
}

int *find_largest(int *ptr_a, int n)
{
    int largest;
    for (; n > 0; n--)
    {
        if (*ptr_a > largest)
            largest = *ptr_a;
        ptr_a++;
    }
    return ptr_a;
}
