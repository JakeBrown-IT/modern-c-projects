#include <stdio.h>

int main(void)
{
    int unit_num, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &unit_num);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%6.2f\t%.2d/%.2d/%d\n",
           unit_num, unit_price, month, day, year);

    return 0;
}
