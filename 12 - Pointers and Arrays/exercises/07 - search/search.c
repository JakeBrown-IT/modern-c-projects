/* Section 12 Exercise 07
 * Author -- Jake Brown
 * Title  -- search.c
 */

#include <stdbool.h>
#include <stdio.h>

bool search(int *ptr, int n, int key);

int main(void) {
  int a[5] = {3, 2, 4, 5, 1};
  int n = 5, key;
  int *ptr = &a[0];

  printf("Enter an integer: ");
  scanf("%d", &key);

  if (search(ptr, n, key))
    printf("%d is in array\n", key);
  else
    printf("%d is not in array\n", key);

  return 0;
}

bool search(int *ptr, int n, int key) {
    for (; n > 0; n--)
        if (*ptr++ == key)
            return true;

    return false;
}
