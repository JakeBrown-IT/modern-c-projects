/** Pointers Exercise 05 - split-time.c */

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void) {
    long total_sec;
    int hr = 0, min = 0, sec = 0;
    int *pHr = &hr, *pMin = &min, *pSec = &sec;

    printf("Enter seconds since midnight: ");
    scanf("%ld", &total_sec);

    split_time(total_sec, pHr, pMin, pSec);

    printf("Time: %02d:%02d:%02d\n", hr, min, sec);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec) {
    *hr = total_sec / 3600;
    *min = (total_sec - *hr * 3600) / 60 ;
    *sec = (total_sec - *hr * 3600) - *min * 60;
}
