#include <stdio.h>

int main(void) {
    float loan_amount, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    loan_amount *= 1 + ((interest_rate / 100) / 12);
    loan_amount -= monthly_payment;

    printf("Balance remaining after first payment: $%.2f\n", loan_amount);

    loan_amount *= 1 + ((interest_rate / 100) / 12);
    loan_amount -= monthly_payment;

    printf("Balance remaining after first payment: $%.2f\n", loan_amount);

    loan_amount *= 1 + ((interest_rate / 100) / 12);
    loan_amount -= monthly_payment;

    printf("Balance remaining after first payment: $%.2f\n", loan_amount);

    return 0;
}
