#include <stdio.h>

int main(void) {
  int f, i;
  float e, n;

  printf("Enter a small floating point number: ");
  scanf("%f", &n);

  while (1) {
    f = i;

    // calculate term
    for (int j = i - 1; j >= 1; j--) {
      f *= j;
    }

    float term = 1.0f / f;

    printf("Term: %f   n: %f\n", term, n);
    // determine if term less than n
    if (term < n) {
      printf("Current term less than n.\n");
      return 0;
    } else {
      e += term;
    }
  }
}
