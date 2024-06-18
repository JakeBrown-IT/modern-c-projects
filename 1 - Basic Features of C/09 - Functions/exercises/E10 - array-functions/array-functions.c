/* Functions Exercise 10 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }

    printf("Largest element in array: %d\n", largest(n, arr));
    printf("Average of elements in array: %d\n", average(n, arr));
    printf("Number of positive elements in array: %d\n", positive(n, arr));

    return 0;
}

int largest(int size, int arr[]);