#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;

    printf("Enter EAN code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
            &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    int sum1 = n2 + n4 + n6 + n8 + n10 + n12;
    int sum2 = n1 + n3 + n5 + n7 + n9 + n11;
    sum2 += (sum1 * 3);
    int total = sum2 - 1;
    total %= 10;
    total = 9 - total;

    printf("Check Digit: %d\n", total);

    return 0;
}
