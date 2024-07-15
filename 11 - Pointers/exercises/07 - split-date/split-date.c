/** Section 11 Exercise 07
 * Author -- Jake Brown
 * Title  -- split-date.c
 */

#include <stdio.h>
#include <stdbool.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
    int day_of_year = 245, year = 2020, month = 0, day = 0;
    int *pMonth = &month, *pDay = &day;

    split_date(day_of_year, year, pMonth, pDay);

    printf("Day %d of %d in dd/mm/yyyy is: %02d/%02d/%d\n", day_of_year, year, day, month, year);

    return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int i;
    bool dateFound = false;

    for (i = 0; i <= 12 && !dateFound; i++)
    {
        switch (i)
        {
        // months with 31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day_of_year <= 31)
                dateFound = true;
            else
                day_of_year -= 31;
            break;
        // months with 30 days
        case 4:
        case 6:
        case 9:
        case 11:
            if (day_of_year <= 30)
                dateFound = true;
            else
                day_of_year -= 30;
            break;
        // february, check if leap year
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                if (day_of_year <= 29)
                    dateFound = true;
                else
                    day_of_year -= 29;
            }
            else
            {
                if (day_of_year <= 28)
                    dateFound = true;
                else
                    day_of_year -= 28;
            }
            break;
        }
    }

    *month = i - 1;
    *day = day_of_year;
}
