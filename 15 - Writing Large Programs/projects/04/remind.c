#include <stdio.h>
#include <string.h>
#include "readline.h"

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */
#define DATETIME_LEN 12 /* max length of datetime string */

int main(void) {
    char datetime_str[DATETIME_LEN], msg_str[MSG_LEN];
    char reminders[MAX_REMIND][DATETIME_LEN + MSG_LEN + 1];

    int month, day, hours, mins, i, j, num_remind = 0;

    while (1) {
        /* if max storage reached break */
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        /* get day and reminder input */
        printf("Enter date, time, and reminder (mm/dd hh:mm <reminder>) (0 to terminate): ");
        scanf("%2d/%2d %2d:%2d", &month, &day, &hours, &mins);

        /* if day is zero then break loop */
        if (month == 0 || day == 0)
            break;

        /* format date and time strings */
        sprintf(datetime_str, "%02d/%02d %02d:%02d", month, day, hours, mins);

        /* read line for reminder string */
        read_line(msg_str, MSG_LEN);

        /* check date is valid */
        if (month < 0 || month > 12 || day < 0 || day > 31) {
            printf("-- Date out of range --\n");
            continue;
        }

        /* check time is valid */
        if (hours < 0 || hours > 23 || mins < 0 || mins > 59) {
            printf("-- Time out of range --\n");
            continue;
        }

        /* check for correct position to put reminder */
        for (i = 0; i < num_remind; i++)
            if (strcmp(datetime_str, reminders[i]) < 0)
                break;

        /* copies all strings and pushes them one index back */
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        /* copy the day and message strings into the reminders slot */        
        strcpy(reminders[i], datetime_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\n  Date  Time  Reminder\n");
    
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}


