/** Section 12 Exercise 03
 * Author -- Jake Brown
 * Title  -- array-contents.c
 */

#include <stdio.h>

#define N 10

int main(void) {
    /* declare array of length N */
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /* declare pointers p and q, point to element 0 and N-1 */
    int *p = &a[0], *q = &a[N - 1], i, temp;

    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    /* while the index of p is less than the index of q
     * swap value at index of p to value at index of q
     * increment index of p, decrement index of q
     *
     * the program reverses the array of N integers
     */

    while (p < q) {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }

    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    
    return 0;
}