/* Functions Exercise 06 - digit.c */

#include <stdio.h>

int digit(int k, int n);

int main(void) {
	int k, n;

	printf("Enter a two positive integers: ");
	scanf("%d %d", &n, &k);
	
	printf("Digit %d from the right: %d.\n", k, digit(k, n));

	return 0;
}

int digit(int k, int n) {
	if (k <= 0) 
		return -1;

	else if (k == 1)
		return n % 10;

	else
		while (k-- > 1) {
			n /= 10;
		
			if (n <= 0) 
				return 0;
		}

	return n % 10;
}
