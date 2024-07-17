/** Section 12 Exercise 02
 * Author -- Jake Brown
 * Title  -- high-middle-low.c
 */

#include <stdio.h>

int main(void) {
	/* array for demonstration */
	int arr[3] = {5, 10, 15};

	/* declare pointers */
	int *high = &arr[2], *low = &arr[0], *middle;
	
	/* incorrect statement:
	 * 
	 * middle = (low + high) / 2;
	 * 
	 * -> C does not support addition of two pointers
	 */

	/* correct statement */
	middle = low + (high - low) / 2;

	printf("Middle: %d\n", *middle);

	return 0;
    
}
