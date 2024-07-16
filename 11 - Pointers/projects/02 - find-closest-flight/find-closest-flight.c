/** Section 11 Project 02
 * Author -- Jake Brown
 * Title  -- find-closest-flight.c
 */

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void) {

    int hrs, mins, desired_time, departure_time, arrival_time;
    int *pDeparture_time = &departure_time, *pArrival_time = &arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hrs, &mins);

    desired_time = (hrs * 60) + mins;

    find_closest_flight(desired_time, pDeparture_time, pArrival_time);

    printf("Closest departure is: %02d:%02d -- Arriving at: %02d:%02d\n",
            departure_time / 60, departure_time % 60,
            arrival_time / 60, arrival_time % 60);

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
    if (desired_time <= (8 * 60)) {
        *departure_time = 8 * 60;
        *arrival_time = (10 * 60) + 16;
    } 
    else if (desired_time <= (9 * 60 ) + 43) {
        *departure_time = (9 * 60) + 43;
        *arrival_time = (11 * 60) + 52;
    } 
    else if (desired_time <= (11 * 60) + 19) {
        *departure_time = (11 * 60) + 19;
        *arrival_time = (13 * 60) + 31;
    } 
    else if (desired_time <= (12 * 60) + 47) {
        *departure_time = (12 * 60) + 47;
        *arrival_time = 15 * 60;
    } 
    else if (desired_time <= (14 * 60)) {
        *departure_time = (14 * 60);
        *arrival_time = (16 * 60) + 8;
    } 
    else if (desired_time <= (15 * 60) + 45) {
        *departure_time = (15 * 60) + 45;
        *arrival_time = (17 * 60) + 55;
    } 
    else if (desired_time <= (19 * 60)) {
        *departure_time = 19 * 60;
        *arrival_time = (21 * 60) + 20;
    } 
    else {
        *departure_time = (21 * 60) + 45;
        *arrival_time = (23 * 60) + 58;
    }
}
