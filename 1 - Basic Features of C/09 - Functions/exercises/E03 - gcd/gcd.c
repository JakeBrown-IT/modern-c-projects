/* Functions Exercise 04 */

#include <stdio.h>

int gcd(int m, int n);

int main(void) {
    int m, n;

    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    printf("GCD of %d and %d: %d\n", m, n, gcd(m, n));

    return 0;
}

int gcd(int m, int n) {
    int tmp;

    while (n > 0) {
        tmp = m % n;
        m = n;
        n = tmp;
  }

  return m;
}

