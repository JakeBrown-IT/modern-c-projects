#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int day_of_year(struct date d);  // returns the current day of the year
int compare_dates(struct date d1, struct date d2);  // returns -1 if d1 is earlier, +1 if d1 later, 0 if equal

int main(void) {
    int result;
    struct date d1, d2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

    result = compare_dates(d1, d2);

    if (result == -1)
        printf("%d/%d/%d is earlier than %d/%d/%d.\n");
    else if (result == 1)
        printf("%d/%d/%d is later than %d/%d/%d.\n");
    else
        printf("You entered the same dates.\n");

    return 0;
}

int day_of_year(struct date d)
{
    int month[12] = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    int day = d.day, i;

    for (i = 0; i < d.month; i++)
        day += month[i];

    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
        return day + 1;
    else
        return day;
}

int compare_dates(struct date d1, struct date d2)
{
    int d1day = day_of_year(d1);
    int d2day = day_of_year(d2);

    if (d1day > d2day)
        return -1;
    else if (d1day < d2day)
        return 1;
    else
        return 0;
}
