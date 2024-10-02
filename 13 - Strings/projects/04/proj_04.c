/* File: proj_04.c
 * Author: Jake Brown
 * Created: 02-10-2024
 * Purpose: Section 13 Project 04
 */

#include <stdio.h>

int main(int argc, char **argv) {
    int i;

    for (i = argc - 1; i > 0; i--)
        printf("%s ", argv[i]);

    return 0;
}