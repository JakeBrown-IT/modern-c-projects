#include <stdio.h>

int main(void)
{
  int num, r;
  int rev = 0;

  printf("Enter a number to reverse: ");
  scanf("%d", &num);

  do {
    r = num % 10;

    rev = rev * 10 + r;

    num = num / 10;
  } while (num != 0);

  printf("Reversed: %d\n", rev);

  return 0;
}
