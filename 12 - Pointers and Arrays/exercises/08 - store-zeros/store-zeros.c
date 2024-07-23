/* Section 12 Exercise 08
 * Author -- Jake Brown
 * Title  -- store-zeros.c
 */ 

#include <stdio.h>

void store_zeros(int *ptr, int n);

int main(void) {
    
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    int *ptr = &a[0];

    store_zeros(ptr, n); 

    ptr = &a[0];

    for (; n > 0; n--)
        printf("%d ", *ptr++);

    return 0;
}

void store_zeros(int *ptr, int n) {
    for (; n > 0; n--)
        *ptr++ = 0;
}

