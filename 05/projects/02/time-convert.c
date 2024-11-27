#include <stdio.h>

int main(void) {
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    if (hours >= 13 && hours <= 24) {
        printf("Equivalent 12-hour time: %d:%.2d PM\n", hours - 12, minutes);
    } else {
        printf("Equivalent 12-hour time: %.2d:%.2d AM\n", hours, minutes);
    }

    return 0;
}
