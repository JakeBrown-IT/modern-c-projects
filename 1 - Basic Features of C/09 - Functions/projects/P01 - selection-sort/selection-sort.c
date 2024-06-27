/* Functions Project 01 - selection-sort.c */

#include <stdio.h>

void selection_sort(int arr[], int n);

int main(void)
{
    int n, i;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sorted Array: ");
    selection_sort(arr, n);

    printf("\n");

    return 0;
}

/**
 * find greatest element
 * set max to greatest and tmp to n - 1
 */

void selection_sort(int arr[], int n)
{
    int max = 0, tmp, i;

    if (n >= 1)
    {
        // find greatest element
        for (i = 0; i < n; i++)
            if (arr[i] > max)
                max = arr[i];

        for (i = 0; i < n; i++)
            if (arr[i] == max)
                break;

        tmp = arr[n - 1];
        arr[i] = tmp;
        arr[n - 1] = max;

        selection_sort(arr, n - 1);
    }

    if (n != 0)
        printf("%d ", arr[n - 1]);
}