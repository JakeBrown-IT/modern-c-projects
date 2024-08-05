/* Section 12 Exercise 15
 * Author -- Jake Brown
 *  Title -- print-row-i.c 
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fill_array(int n, int *pArr, int upper, int lower);
bool search(int n, int *pArr, int key);
void print_row_i(int n, int *pRowI);

int main(void) {
    int lower = 0;
    int upper = 30;
    int temperatures[7][24];
    int *pArr = &temperatures[0][0];
    int *pRowI;
    int key, row;

    fill_array((7 * 24), pArr, upper, lower);
    
    printf("Enter a temperature: ");
    scanf("%d", &key);

    if (search((7 * 24), pArr, key))
        printf("Temperature: %d found.\n", key);
    else
        printf("Temperature: %d not found.\n", key);

    printf("Enter a day (1-7): ");
    scanf("%d", &row);

    pRowI = &temperatures[row][0];

    print_row_i(24, pRowI);

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

void print_row_i(int n, int *pRowI) {
    for (; n > 0; n--)
        printf("%d ", *pRowI++);
    printf("\n");
}
