/* Section 12 Exercise 06
 * Author -- Jake Brown
 * Title  -- sum-array.c
 */ 

#include <stdio.h>

int sum_array(int *ptr, int n);

int main(void) 
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = a;
    int sum, n = 5;

    sum = sum_array(ptr, n);
    
    printf("Array Sum: %d\n", sum);

    return 0;
}

int sum_array(int *ptr, int n) 
{
    int sum;

    sum = 0;
    for (;n > 0; n--)
        sum += *ptr++;
    
    return sum;
}

