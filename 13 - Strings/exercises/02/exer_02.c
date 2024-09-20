/* File: exer_02.c 
 * Author: Jake Brown
 * Created: 16-09-2024
 * Purpose: Section 13 - Exercise 02
 */

#include <stdio.h>

int main(void) {
    char *p = "abc";

    //putchar(p);   // invalid - putchar takes in a char, not a pointer address 
    putchar(*p);    // valid - prints 'a'
    puts(p);        // valid - prints abc
    //puts(*p);     // invalid - puts takes a char*, not a char 

    return 0;
}
