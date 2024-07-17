/** Section 12 Exercise 01
 * Author -- Jake Brown
 * Title  -- pointer-expressions.c
 */

#include <stdio.h>

int main(void) {
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    /* (a) *(p + 3) ==> 14
     * (b) *(q - 3) ==> 34
     * (c) q - p    ==> 4	  
     * (d) p < q    ==> 0
     * (e) *p < *q  ==> 1
     */

    printf("*(p + 3) ==> %d\n", *(p + 3));
    printf("*(q - 3) ==> %d\n", *(q - 3));
    printf("   q - p ==> %ld\n", q - p);
    printf("   p < q ==> %d\n", p < q);
    printf(" *p < *q ==> %d\n", *p < *q);

    return 0;
}
