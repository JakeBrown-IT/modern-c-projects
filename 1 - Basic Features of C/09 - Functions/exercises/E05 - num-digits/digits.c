/* Functions Exercise 05 - digits.c */

#include <stdio.h>

int num_digits(int n);

int main(void) {
	int n;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	printf("%d has %d digit(s).\n", n, num_digits(n));

	return 0;
}

int num_digits(int n) {
	int d = 0, tmp = n;

	while (tmp != 0) {
		tmp /= 10;
		d++;
	}

	return d;
}
