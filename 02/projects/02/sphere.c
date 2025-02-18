#include <stdio.h>

int main(void) {
    float radius = 10.0f, pi = 3.14, volume;

    volume = (4.0f / 3.0f) * pi * (radius * radius * radius);

    printf("%f\n", volume);

    return 0;
}
