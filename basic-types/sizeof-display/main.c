#include <stdio.h>

int main(void) {

    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of short: %ld bytes\n", sizeof(short));
    printf("Size of long: %ld bytes\n", sizeof(long));
    printf("Size of float: %f bytes\n", sizeof(float));
    printf("Size of double: %lf bytes\n", sizeof(double));
    printf("Size of long double: %ld bytes\n", sizeof(long double));

    return 0; 
}