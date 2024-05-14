/*
 * 9. Write a program that asks the user for a 12-hour time; then displays
 * the time in 24-hour form:
 * 
 * Enter a 12-hour time: 9:11 PM
 * Equivalent 24-hour time: 21:11
 * 
 * See Programming Project 8 for a description of the input format.
 * 
 * --- Thinking ---
 * 
 * Input is a string with the format: hh:mm A/AM/P/PM with a possible space
 * between the minutes and AM/PM. The A/AM/P/PM is not case-sensitive.
 * 
 * We need to convert the input to a 24-hour format.
 * We do this by checking if the input is AM or PM, then we convert the
 * hours by adding 12 if it's PM, which we check by comparing the input
 * with "P" or "PM".
 * 
 * We can get the input string by using scanf for the hours and minutes,
 * then by using getch to get the AM/PM character.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {

    int hours, minutes;
    char period;

    printf("Enter a 12-hour time: ");
    scanf("d:%d", &hours, &minutes);

    while ((period = getchar() != '\n')) {
        if (toupper(period) == 'A') {
            if (hours == 12) {
                hours = 0;
            }
            break;
        } else if (toupper(period) == 'P') {
            if (hours != 12) {
                hours += 12;
            }
            break;
        }
    }

    printf("Equivalent 24-hour time: %d:%.2d\n", hours, minutes);

    return 0;
}