/* Section 12 Exercise 13
 * Author -- Jake Brown
 *  Title -- identity-matrix.c
 */

#include <stdio.h>

void fill_array(int n, double *pArr);
void print_array(int n, double *pArr);

int main(void) {
    int n;

    printf("Enter a value for 'n': ");
    scanf("%d", &n);

    double arr[n][n];
    double *pArr = &arr[0][0];
    
    fill_array(n, pArr);
    
    pArr = &arr[0][0];

    print_array(n, pArr);

    return 0;
}

void fill_array(int n, double *pArr) {
    int i, ctr = n;

    for (i = 0; i <= n*n; i++)
        if (ctr == n) {
            *pArr++ = 1;
            ctr = 0;
        }
        else {
            *pArr++ = 0;
            ctr++;
        }

}

void print_array(int n, double *pArr) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.3lf ", *pArr++);
        }
        printf("\n");
    }
}

