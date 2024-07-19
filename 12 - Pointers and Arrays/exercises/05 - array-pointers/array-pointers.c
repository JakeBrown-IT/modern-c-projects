/** Section 12 Exercise 05
 * Author -- Jake Brown
 * Title  -- array-pointers.c
 */

#include <stdio.h>

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    int *p;

    p = a;

    /* (a) p == a[0]    --> illegal
       (b) p == &a[0]   --> true
       (c) *p == a[0]   --> true
       (d) p[0] == a[0] --> true
    */
    
    printf("p == a[0]    --> illegal\n");
    printf("p == &a[0]   --> %d\n", p == &a[0]);
    printf("*p == a[0]   --> %d\n", *p == a[0]);
    printf("p[0] == a[0] --> %d\n", p[0] == a[0]);

    return 0;
} 