# Section 16 Exercise 05

Write the following functions, assuming that the `date` structure contains three
members: `month`, `day`, and `year` (all of type `int`).

(a) `int day_of_year(struct date d);`

Returns the day of the year (an integer between 1 and 366) that corresponds to
the date `d`.

(b) `int compare_dates(struct date d1, struct date d2);`

Returns -1 if `d1` is an earlier date than `d2`, +1 if `d1` is a later date than
`d2`, and 0 if `d1` and `d2` are the same.


## Solution

(a)

```c
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
```

(b)

```c
int compare_dates(struct date d1, struct date d2)
{
    if (d1.year < d2.year)
        return -1;
    else if (d1.year == d2.year && d1.month < d2.month)
        return -1;
    else if (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day)
        return -1;
    else if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day)
        return 0;
    else
        return 1;
}
```
