/* Functions Exercise 10 */

#include <stdio.h>

int largest(int n, int arr[]);
int average(int n, int arr[]);
int positive(int n, int arr[]);

int main(void)
{
    // initialise array with max length of 100
    int arr[100] = {0};
    int n, i = 0;

    // get length of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // set the indexes in array to values
    printf("Enter %d integers: ", n);
    for (; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // print outputs of functions
    printf("Largest element in array: %d\n", largest(n, arr));
    printf("Average of elements in array: %d\n", average(n, arr));
    printf("Number of positive elements in array: %d\n", positive(n, arr));

    return 0;
}

// get largest element in array
int largest(int n, int arr[]) {
    int i = 0, max = arr[0];

    for (; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    } 
    return max;
}

// get average of all elements in array
int average(int n, int arr[]) {
    int i = 0, avr = 0;

    for (; i < n; i++) {
        avr += arr[i];
    }
    return avr / n; 
}

// get the count of positive elements in array
int positive(int n, int arr[]) {
    int i = 0, count = 0;

    for (; i < n; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}
