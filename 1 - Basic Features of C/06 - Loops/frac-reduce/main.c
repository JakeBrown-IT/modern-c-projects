/* Program to convert a fraction to its lowest terms. */

#include <stdio.h>

int main(void) {
  int num, den, m, n, tmp;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &den);

  m = num;
  n = den;

  while (n > 0) {
    tmp = m % n;
    m = n;
    n = tmp;
  }

  printf("In lowerst terms: %d/%d\n", (num / m), (den / m));

  return 0;
}
