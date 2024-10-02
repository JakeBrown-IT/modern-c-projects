/* File: proj_05.c
 * Author: Jake Brown
 * Created: 02-10-2024
 * Purpose: Section 13 Project 05
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int i, sum = 0;

    for (i = 1; i < argc; i++)
        sum += atoi(argv[i]);

    printf("Total: %d\n", sum);

    return 0;
}