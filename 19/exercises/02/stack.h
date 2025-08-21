#ifndef STACK_H
#define STACK_H

#define PUBLIC
#define PRIVATE static

#include <stdbool.h>

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

#endif
