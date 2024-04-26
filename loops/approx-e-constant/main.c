/*
 * Calculate e to n
 *
 * e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
 *
 * n = n * (n - 1)!
 * */

#include <stdio.h>

int main(void) {
  int n, f;
  float e;

  printf("Enter a value for e approximation: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    f = i;

    for (int j = i - 1; j >= 1; j--) {
      f *= j;
    }

    e += 1.0f / f;
  }

  printf("e approx: %f\n", e);

  return 0;
}
