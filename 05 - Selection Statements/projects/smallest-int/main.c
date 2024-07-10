#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, lg, sm;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4) {
        lg = n1;
    } else if (n2 > n1 && n2 > n3 && n2 > n4) {
        lg = n2;
    } else if (n3 > n1 && n3 > n2 && n3 > n4) {
        lg = n3;
    } else if (n4 > n1 && n4 > n2 && n4 > n3) {
        lg = n4;
    } 

    if (n1 < n2 && n1 < n3 && n1 < n4) {
        sm = n1;
    } else if (n2 < n1 && n2 < n3 && n2 < n4) {
        sm = n2;
    } else if (n3 < n1 && n3 < n2 && n3 < n4) {
        sm = n3;
    } else if (n4 < n1 && n4 < n2 && n4 < n3) {
        sm = n4;
    }
    
    printf("Largest: %d\n", lg);
    printf("Smallest: %d\n", sm);

    return 0;
}
