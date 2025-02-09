#include <stdio.h>

int main(void) {
  int repayments;
  float total, payment;

  printf("Enter loan total: $");
  scanf("%f", &total);

  printf("Enter number of repayments: ");
  scanf("%d", &repayments);

  for (int i = 0; i < repayments; i++) {
    printf("Enter repayment amount: $");
    scanf("%f", &payment);

    total -= payment;

    printf("New loan balance: $%.2f\n", total);
  }

  printf("Remaining Loan Balance: $%.2f\n", total);

  return 0;
}
