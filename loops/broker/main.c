#include <stdio.h>

int main(void) {
  float commission, shares, price, value, rival;

  printf("Enter number of shares sold: ");
  scanf("%f", &shares);

  while (shares > 0) {
    printf("Enter price per share: ");
    scanf("%f", &price);

    value = shares * price;

    if (value < 2500.00f)
        commission = 30.00f + 0.017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.0034f * value;
    else if (value < 50000.00f;
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else
       commission = 255.00f + 0.0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    if (shares < 2000) {
        rival = 33.00f + (0.03 * shares);
    } else {
        rival = 33.00f + (0.02 * shares);
    }
    printf("Commission:  $%.2f\n", commission);
    printf("Rival Offer: $%.2f\n", rival);

    printf("Enter number of shares sold: ");
    scanf("%f", &shares);
  }

  return 0;
}
