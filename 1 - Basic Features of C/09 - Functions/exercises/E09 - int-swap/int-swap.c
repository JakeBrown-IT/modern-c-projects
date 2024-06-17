/* Functions Exercise 09
 *
 * This code at first glance looks as though it would sway the values in i and j, but
 * but it does not, as the values are not assigned from a and b to i and j, therefore
 * the output is:
 * -- i = 1, j = 2
 */

#include <stdio.h>

void swap(int a, int b);

int main(void) {
	int i = 1, j = 2;

	swap(i, j);
	printf("i = %d, j = %d\n", i, j);

	return 0;
}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}