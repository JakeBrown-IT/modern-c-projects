/** Section 04 Project 01
 * Author -- Jake Brown
 * Title  -- two-digit-reversal.c
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a two digit number: ");
    scanf("%d", &num);

    int first, second;

    first = num / 10;
    second = num % 10;

    printf("The reversal is: %d%d\n", second, first);

    return 0;
}
