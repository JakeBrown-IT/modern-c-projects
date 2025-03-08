#include <stdio.h>

int main(void) {
    int x, fifth, fourth, cubed, squared, result = 0;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    fifth = (x * x * x * x * x);
    fourth = (x * x * x * x);
    cubed = (x * x * x);
    squared = (x * x);

    result = ((3 * fifth) + (2 * fourth) - (5 * cubed) - squared + (7 * x) - 6);

    printf("Result: %d\n", result);

    return 0;
}
