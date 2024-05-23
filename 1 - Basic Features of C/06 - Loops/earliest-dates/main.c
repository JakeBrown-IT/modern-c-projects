/*
 * Calculating the earliest date
 *
 * --
 *
 * Get first date from user, check if date is 0/0/0
 *
 * If tmp year is less than or equal current year, replace all values
 *
 * If tmp year is greater than current year, pass
 * Else if tmp year is less than current year, replace all values
 * Else check month is greater than current month, replace all values if true
 * Else check day is greater than current day, replace all values if true
 * Else do nothing, dates are the same
 *
 * */

#include <stdio.h>

int main(void) {
  int day, month, year, tmp_day, tmp_month, tmp_year;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  if (month != 0 && day != 0 && year != 0) {
    do {
      if (tmp_year > year) {
        continue;
      } else if (tmp_year < year) {
        year = tmp_year;
        month = tmp_month;
        day = tmp_day;
      } else if (tmp_month < month) {
        year = tmp_year;
        month = tmp_month;
        day = tmp_day;
      } else if (tmp_day < day) {
        year = tmp_year;
        month = tmp_month;
        day = tmp_day;
      }

      printf("Enter a date (mm/dd/yy): ");
      scanf("%d/%d/%d", &tmp_month, &tmp_day, &tmp_year);

    } while (tmp_month != 0 && tmp_day != 0 && tmp_year != 0);
    printf("%d/%d/%d is the earliest date.\n", month, day, year);
  } else {
    printf("Invalid date given.\n");
  }

  return 0;
}
