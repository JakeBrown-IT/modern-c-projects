#include <stdio.h>

int main(void) {
  int n = 1, sq = 0, i = 1;

  printf("Enter a number to find the even squares to: ");
  scanf("%d", &n);
  
  // loop until square bigger than n
  for (i;;i++) {
    // square i
    sq = i * i;
    
    // break if greater than n
    if (sq > n) {
      break;
    } 
    // print if square is even
    if (sq % 2 == 0) {
      printf("%d\n", sq);
    }
  }

  return 0;
}
