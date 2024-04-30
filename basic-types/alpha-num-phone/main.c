#include <stdio.h>

int main(void) {
  int phone;
  char ch;

  printf("Enter phone number: ");

  ch = getchar();

  while (ch != '\n') {
    if (ch == 'A' || ch == 'B' || ch == 'C') {
      putchar('2');
    } else if (ch == 'D' || ch == 'E' || ch == 'F') {
      putchar('3');
    } else if (ch == 'G' || ch == 'H' || ch == 'I') {
      putchar('4');
    } else if (ch == 'J' || ch == 'K' || ch == 'L') {
      putchar('5');
    } else if (ch == 'M' || ch == 'N' || ch == 'O') {
      putchar('6');
    } else if (ch == 'P' || ch == 'R' || ch == 'S') {
      putchar('7');
    } else if (ch == 'T' || ch == 'U' || ch == 'V') {
      putchar('8');
    } else if (ch == 'W' || ch == 'X' || ch == 'Y') {
      putchar('9');
    } else {
      putchar(ch);
    }

    ch = getchar();
  }

  printf("\n");

  return 0;
}
