#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a  number: ");
    scanf("%d", &num);

    if (0 <= num && num <= 9 ) {
        printf("The number %d has 1 digit.\n", num);
    } else if (10 <= num && num <= 99) {
        printf("The number %d has 2 digits.\n", num);
    } else {
        printf("The number %d has 3 digits.\n", num);
    }

    return 0;
}
