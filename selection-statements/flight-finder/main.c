#include <stdio.h>

int main(void) {
    int hours, minutes, since_midnight;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);
    
    since_midnight = (hours * 60) + minutes;
    
    if (since_midnight <= (8 * 60)) {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    } else if (since_midnight <= (9 * 60 ) + 43) {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    } else if (since_midnight <= (11 * 60) + 19) {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");      
    } else if (since_midnight <= (12 * 60) + 47) {  
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    } else if (since_midnight <= (14 * 60)) {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    } else if (since_midnight <= (15 * 60) + 45) {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n"); 
    } else if (since_midnight <= (19 * 60)) {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    } else {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n"); 
    }

    return 0;
}
