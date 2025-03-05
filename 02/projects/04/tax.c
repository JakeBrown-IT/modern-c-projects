#include <stdio.h>

int main(void) {
    float before_tax, after_tax, tax = 1.05f;

    printf("Enter an amount: $");
    scanf("%f", &before_tax);

    after_tax = before_tax * tax;

    printf("With tax added: $%.2f", after_tax);

    return 0;
}
