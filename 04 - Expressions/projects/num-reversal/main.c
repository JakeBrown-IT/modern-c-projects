#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    int first, second, third;

    first = num / 100;
    second = (num / 10) % 10;
    third = num % 10;

    printf("The reversal is: %d%d%d\n", third, second, first); 

    return 0;
} 
