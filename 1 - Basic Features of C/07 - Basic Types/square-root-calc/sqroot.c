/*
 * Write a program that uses Newton's method to compute the square
 * root of a positive floating point number:
 * 
 * Enter a positive number: 3
 * Square root: 1.73205
 * 
 * Let x be the number entered by the user. Newton's method requires
 * an initial guess y for the square root of x (we'll use y = 1). 
 * Successive guesses are found by computing the average of y and x/y.
 * The following table shows how the square root of 3 would be found:
 * 
 * x | y       | x/y     | Avr y & x/y
 * --|---------|---------|------------
 * 3 | 1       | 3       | 2
 * 3 | 2       | 1.5     | 1.75
 * 3 | 1.75    | 1.71429 | 1.73214
 * 3 | 1.73214 | 1.73196 | 1.73205
 * 3 | 1.73205 | 1.73205 | 1.73205
 * 
 * Note that the values of y get progressively closer to the true
 * square root of x. For greater accuracy, your program should
 * use variables of type double rather than float. Have the program
 * terminate when the absolute value of the difference between 
 * the old value of y and the new value of y is less than the
 * product of 0.00001 and y. Hint: Call the fabs function to find 
 * the absolute value of a double. (You'll need to include the math.h
 * header at the beginning of your program in order to use fabs).
 */

#include <stdio.h>
#include <math.h>

int main(void) {

    double x, y = 1, tmp, sqrt;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do {
        tmp = y;
        y = (y + (x / y)) / 2;
        sqrt = y;
    } while (fabs(tmp - y) > (0.00001 * y));

    printf("Square root: %lf\n", sqrt);

    return 0;
}