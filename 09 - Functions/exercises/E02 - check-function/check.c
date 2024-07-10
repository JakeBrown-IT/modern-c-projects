/* Functions Exercise 02 */

#include <stdio.h>

int check(int x, int y, int n);

int main(void) {
    int x, y, n;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y, &n);

    printf("Result: %d\n", check(x, y, n));

    return 0;
}

int check(int x, int y, int n) {
    if ((x >= 0 && x <= n - 1) && (y >= 0 && y <= n - 1))
        return 1;
    return 0;
}