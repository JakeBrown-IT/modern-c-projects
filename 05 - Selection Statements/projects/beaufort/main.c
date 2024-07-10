#include <stdio.h>

int main(void) {
    int speed;

    printf("Enter wind speed in knots: ");
    scanf("%d", &speed);

    if (speed < 1) {
        printf("Wind Force is Calm.\n");
    } else if (speed <= 3) {
        printf("Wind Force is Light Air.\n");
    } else if (speed <= 27) {
        printf("Wind Force is Breeze.\n");
    } else if (speed <= 47) {
        printf("Wind Force is Gale.\n");
    } else if (speed <= 63) {
        printf("Wind Force is Storm.\n");
    } else {
        printf("Wind Force is Hurricane.\n");
    }

    return 0;
}
