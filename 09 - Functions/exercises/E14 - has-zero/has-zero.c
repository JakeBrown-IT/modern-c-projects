/* Functions Exercise 14 - has-zero
 *
 * The error is with the 'return false;' line, it needed to be out of the for loop,
 * with the else clause of the if statement removed.
 */

#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n);

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Result: %d\n", has_zero(arr, 5));

    return 0;
}

bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
    return false;
}
