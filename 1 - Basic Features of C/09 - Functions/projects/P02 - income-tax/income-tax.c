/* Arrays Project 02 - income-tax.c */

#include <stdio.h>

float calculate_tax(float income);

int main(void) {
    double tax, income;

    printf("Enter amount of taxable income: %c", (char) 156);
    scanf("%lf", &income);

    tax = calculate_tax(income);

    printf("Tax Due: %c%.2lf\n", (char) 156, tax);

    return 0;
}

float calculate_tax(float income) {
    if (income <= 750.0f)
        return income * 0.01f;
    else if (income <= 2250.0f)
        return 7.5f + (income - 750.0f) * 0.02f;
    else if (income <= 3750.0f)
        return 37.5f + (income - 2250.0f) * 0.03f;
    else if (income <= 5250.0f)
        return 82.5f + (income - 3750.0f) * 0.04f;
    else if (income <= 7000.0f)
        return 142.5f + (income - 5250.0f) * 0.05f;
    else
        return 230.0f + (income - 7000.0f) * 0.06f;
}