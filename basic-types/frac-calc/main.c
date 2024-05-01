#include <stdio.h>

int main() {
    char operator;
    int num1, denom1, num2, denom2;
    
    printf("Enter two fractions separated by a +, -, *, or / sign: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, &num2, &denom2);

    switch (operator) {
        case '*':
            printf("Result: %d/%d\n", (num1 * num2), (denom1 * denom2));
            break;
        case '/':
            printf("Result: %d/%d\n", (num1 * denom2), (num2 * denom1));
            break;
        case '+':
            printf("Result: %d/%d\n", (num1 * denom2 + num2 * denom1), (denom1 * denom2));
            break;
        case '-':
            printf("Result: %d/%d\n", (num1 * denom2 - num2 * denom1), (denom1 * denom2));
            break;
        default:
            printf("Invalid operator, terminating.\n");
    }

    return 0;
}