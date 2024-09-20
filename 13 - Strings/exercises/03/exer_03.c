/* File: exer_03.c 
 * Author: Jake Brown
 * Created: 20-09-2024
 * Purpose: Section 13 Exercise 03
 */

#include <stdio.h>

int main(void) {
    int i, j;
    char *s;

    scanf("%d%s%d", &i, s, &j);

    /* If 12abc34 56def78 is entered:
     * i - 12
     * s - abc34
     * j - 56
     * The rest of the entered data will be assigned to the next call of scanf
     */

    return 0;
}

