#include <stdio.h>

int main(void) {
  int days, wk_start;

  printf("Enter number of days in the month: ");
  scanf("%d", &days);

  printf("Enter starting day of the week (1-Sun, 7=Sat): ");
  scanf("%d", &wk_start);

  // print whitespace according to wk_start
  // increment i, increment starting day of the week
  // if day of week is 7, print num and reset to 1, print newline
  
  for (int i = 1; i < wk_start; i++) {
    printf("   ");
  }

  for (int i = 1; i <= days; i++) {
    if (wk_start != 7) {
      printf("%3d", i);
    } else {
      printf("%3d\n", i);
      wk_start = 0;
    }

    wk_start++;
  }

  printf("\n");

  return 0;
}
