/* Arrays Project 10 - flight-finder-v2 */

#include <stdio.h>

int main(void) {
    int hours, minutes, since_midnight;
    int departures[8] = {(8 * 60), (9 * 60) + 43, (11 * 60) + 19, (12 * 60) + 47, (14 * 60), (15 * 60) + 45, (19 * 60), (21 * 60) + 45};
    int arrivals[8] = {(10 * 60) + 16, (11 * 60) + 52, (13 * 60) + 31, (15 * 60), (16 * 60) + 8, (17 * 60) + 55, (21 * 60) + 20, (23 * 60) + 58};

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);
    
    since_midnight = (hours * 60) + minutes;
    
    for (int i = 0; i < 8; i++) {
        if (since_midnight <= departures[i]) {
            printf("Closest departure time is %d:%02d, arriving at %d:%02d.\n", 
                    departures[i] / 60, departures[i] - ((departures[i] / 60) * 60),
                    arrivals[i] / 60, arrivals[i] - ((arrivals[i] / 60) * 60));
            break;
        }
    }

    return 0;
}