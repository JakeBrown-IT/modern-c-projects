/*
 * Programming Project 12: Expression Evaluator
 *
 * Write a program that evaluates an expression:
 * 
 * Enter an expression: 1+2.5*3
 * Value of expression: 10.5
 * 
 * The operands in the expression are floating point numbers; the operators are +, -, *,
 * and /. The expression is evaluated from left to right (no operator takes precedence
 * over any other operator).
 * 
 * -- Thinking --
 * 
 * Use scanf to get the first number, then use getchar to get the next characters as scanf
 * will stop at the first non-digit character. Use a switch statement to determine the
 * operator and perform the operation on the total after getting the next number with scanf.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    double num = 0.0, total = 0.0;
    char ch;

    printf("Enter an expression: ");
    scanf("%lf", &total);

    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case '+':
                scanf("%lf", &num);
                total += num;
                break;
            case '-':
                scanf("%lf", &num);
                total -= num;
                break;
            case '*':
                scanf("%lf", &num);
                total *= num;
                break;
            case '/':
                scanf("%lf", &num);
                total /= num;
                break;
            default:
                break;
        }
    }

    printf("Value of expression: %.2f\n", total);

    return 0;
}