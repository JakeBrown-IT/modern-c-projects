/** Section 11 Exercise 01
 * Author -- Jake Brown
 * Title  -- aliases.c
 *
 * Example of an alias : *--int i = 1, *p = &i;
 * p is an alias of i * --if i = 1, *p = 1 * --if * p = 2, i = 2 * /
 */

#include <stdio.h>

int main(void)
{
    int i = 1, *p;
    p = &i;

    printf("%d\n", *p); // alias
    // printf("%d\n", &p);   // not alias
    // printf("%d\n", *&p);  // not alias
    // printf("%d\n", &*p);  // not alias
    // printf("%d\n", *i);   // not alias
    // printf("%d\n", &i);   // not alias
    printf("%d\n", *&i); // alias
    // printf("%d\n", &*i);  // not alias

    return 0;
}