/* Section 12 Exercise 17
 * Author -- Jake Brown
 *  Title -- sum-two-dimensional-array.c 
 */ 

#include <stdio.h>

#define LEN 5

int sum_two_dimensional_array(const int *pArr, int n);

int main(void) {
    int arr[4][LEN] = {
        {1, 2, 3, 4, 5}, 
        {5, 4, 3, 2, 1}, 
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1}
    };

    int *pArr = &arr[0][0];

    printf("Sum of Array: %d\n", sum_two_dimensional_array(pArr, 4*LEN));

    return 0;
}

int sum_two_dimensional_array(const int *pArr, int n) {
    int sum = 0;

    for (; n > 0; n--) 
        sum += *pArr++;

    return sum;
}

