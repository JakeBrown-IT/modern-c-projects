/* Section 12 Exercise 10
 * Author -- Jake Brown
 * Title  -- find-middle.c 
 */ 

#include <stdio.h>

int *find_middle(int *ptr_a, int n);

int main(void) {
    int a[] = {1, 2, 3, 4 ,5};
    int *ptr_a = &a[0];
    int n = 5;

    printf("Middle of Array: %d\n", *find_middle(ptr_a, n));

    return 0;
}

int *find_middle(int *ptr_a, int n) {
    n /= 2;

    for (; n > 0; n--)
        ptr_a++;

    return ptr_a;
}

