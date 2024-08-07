/* Section 12 Exercise 16
 * Author -- Jake Brown
 *  Title -- highest-temp.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fill_array(int n, int *pArr, int upper, int lower);
bool search(int n, int *pArr, int key);
void print_row_i(int n, int *pRowI);
int find_largest(int *pArr, int n);

int main(void) {
    int lower = 13;
    int upper = 22;
    int temperatures[7][24];
    int *pArr = &temperatures[0][0];
    int *pRowI, *pDay;
    int key, row, i;

    /* fill the array with random temperatures */
    fill_array((7 * 24), pArr, upper, lower);
    
    /* check the array for a temperature */
    printf("Enter a temperature to search for: ");
    scanf("%d", &key);

    if (search((7 * 24), pArr, key))
        printf("Temperature: %d found.\n", key);
    else
        printf("Temperature: %d not found.\n", key);

    /* display the temperatures across a single day */
    printf("Enter a day of the week to display temperatures for (1-7): ");
    scanf("%d", &row);

    pRowI = &temperatures[row][0];

    print_row_i(24, pRowI);

    /* display the highest temperatures of each day of the week */
    printf("Highest Temperatures of the Week:\n");
    
    pDay = &temperatures[0][0];
    for (i = 0; i < 7; i++) {
        pDay = &temperatures[i][0];
        printf("Day %d: %2d\n", i+1, find_largest(pDay, 24));
    }

    return 0;
}

/* fill array with random integers between two values */
void fill_array(int n, int *pArr, int upper, int lower) {
    int i;

    for (i = 0; i < n; i++)
        *pArr++ = (rand() % (upper - lower + 1)) + lower;
}

/* search array using pointer to find key */
bool search(int n, int *pArr, int key) {
   for (; n > 0; n--)
        if (*pArr++ == key)
            return true;

    return false;
 
}

/* print the i-th row of the array */
void print_row_i(int n, int *pRowI) {
    for (; n > 0; n--)
        printf("%d ", *pRowI++);
    printf("\n");
}

/* finds the largest element in the array row */
int find_largest(int *pArr, int n)
{
    int largest;
    for (; n > 0; n--)
    {
        if (*pArr > largest)
            largest = *pArr;
        pArr++;
    }
    return largest;
}
