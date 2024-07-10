#include <stdio.h>

int main(void) {
    int first_day, first_month, first_year, second_day, second_month, second_year;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_month, &first_day, &first_year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &second_month, &second_day, &second_year);

    if (first_year < second_year) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n", 
                first_month, first_day, first_year, second_month, second_day, second_year);
    } else if (second_year < first_year) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n", 
                second_month, second_day, second_year, first_month, first_day, first_year);
    } else {
        if (first_month < second_month) {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n", 
                first_month, first_day, first_year, second_month, second_day, second_year);
        } else if (second_month < first_month) {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n", 
                second_month, second_day, second_year, first_month, first_day, first_year);
        } else {
            if (first_day < second_day) {
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n", 
                    first_month, first_day, first_year, second_month, second_day, second_year);
                
            } else if (second_day < first_day) {
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n", 
                    second_month, second_day, second_year, first_month, first_day, first_year);
            } else {
                printf("You entered the same dates.\n");
            }
        }
    }

    return 0;
}
