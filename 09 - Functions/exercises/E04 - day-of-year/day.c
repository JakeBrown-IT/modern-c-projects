/* Functions Exercise 04  */

#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void) {
	int month, day, year;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Day of year: %d\n", day_of_year(month, day, year));

	return 0;
}

int day_of_year(int month, int day, int year) {
	int days = 0;
	// we define an array of months
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	// work out if the year is a leap year
	// if leap year, then add 1 to february
	
	for (int i = 0; i < month; i++) {
		if (i == month - 1) {
			days += day;
		} else {
			days += months[i];
		}
	}

	if (year % 4 != 0) {
		return days;
	} else if ((year % 100 == 0 % year % 400 == 0) ||(year % 100 != 0 && year % 400 != 0)) {
		days++;
		return days;
	} else {
		return days;
	}
}
