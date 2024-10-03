/* File: proj_06.c
 * Author: Jake Brown
 * Created: 02-10-2024
 * Purpose: Section 13 Project 06
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9
#define MAX_ARG_LEN 8

char *sanitise(char str[]);

int main(int argc, char **argv) {
    char *planets[] = { "Mercury", "Venus", "Earth",
                        "Mars", "Jupiter", "Saturn",
                        "Neptune", "Uranus", "Pluto"};
    char argcpy[MAX_ARG_LEN];
    int i, j;

    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++) {
            strcpy(argcpy, argv[i]);
            if (strcmp(sanitise(argcpy), planets[j]) == 0) {
                printf("%s is planet %d.\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet.\n", argv[i]);
    }

    return 0;
}

char *sanitise(char str[]) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0)
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    return str;
}
