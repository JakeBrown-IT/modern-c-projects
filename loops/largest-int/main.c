#include <stdio.h>

int main(void)
{
  float gr, tmp;

  do {
    printf("Enter a number: ");
    scanf("%f", &tmp);

    if (tmp > gr) {
      gr = tmp;
    }
  } while (tmp > 0);

  printf("The largest number entered was %f.\n", gr);

  return 0;
}
