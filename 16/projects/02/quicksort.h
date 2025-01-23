#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "inventory.h"

void quicksort(struct part arr[], int low, int high);
int split(struct part arr[], int low, int high);

#endif
