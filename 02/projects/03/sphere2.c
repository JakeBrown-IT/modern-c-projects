#include <stdio.h>

int main(void) {
    float pi = 3.14, radius, volume;

    printf("Enter radius: ");
    scanf("%f", &radius);

    volume = (4.0f / 3.0f) * pi * (radius * radius * radius);

    printf("%f\n", volume);

    return 0;
}
