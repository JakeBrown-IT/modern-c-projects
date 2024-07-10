#include <stdio.h>

int main(void) {
  int i, n;
  char ch;

  printf("This program prints a table of squares.\n");
  printf("Enter the number of squares to calculate: ");
  scanf("%d", &n);
  ch = getchar();

  for (i = 1; i <= n; i++) {
    if (i % 24 == 0) {
      printf("Press Enter to continue...");

      while (getchar() != '\n') {
        continue;
      }
    }

    printf("%10d%10d\n", i, i * i);
  }

  return 0;
}
