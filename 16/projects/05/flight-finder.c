#include <stdio.h>

#define LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

// formula for (mins) to (hh:mm): if (mins / 60 > 12) then (mins / 60 - 12) else (mins / 60)
// formula for (a.m.) or (p.m.): if (mins % 60 > 719) then (p) else (a)

const struct flight {
    int depart;
    int arrive;
} flights[] = {
    {480, 616}, {583, 712}, {679, 811}, {767, 900},
    {840, 968}, {945, 1057}, {1140, 1280}, {1305, 1438}
};

void print(const struct flight f);

int main(void) {
    int i, hours, minutes, since_midnight;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    since_midnight = (hours * 60) + minutes;

    // check if time is less or greater than the interval of the next 2 departures
    for (i = 0; i < LENGTH(flights) - 1; i++) {
        if (since_midnight <= flights[i].depart + (flights[i + 1].depart - flights[i].depart) / 2) {
            print(flights[i]);
            return 0;
        }
    }
    i++;
    print(flights[i]);

    return 0;
}

void print(const struct flight f)
{
    printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
            f.depart / 60 > 12 ? f.depart / 60 - 12 : f.depart / 60,
            f.depart % 60, f.depart > 719 ? 'p' : 'a',
            f.arrive / 60 > 12 ? f.arrive / 60 - 12 : f.arrive / 60,
            f.arrive % 60, f.arrive > 719 ? 'p' : 'a');
}
