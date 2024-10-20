/* File: proj_18.c 
 * Author: Jake Brown
 * Created: 20-10-2024
 * Purpose: Section 13 Project 18
 */ 

#include <stdio.h>

#define MONTHS 12

int main(void) {
    int month, day, year;
    char *months[MONTHS] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("You entered the date %s %d, %d\n", months[month - 1], day, year);

    return 0;
}
