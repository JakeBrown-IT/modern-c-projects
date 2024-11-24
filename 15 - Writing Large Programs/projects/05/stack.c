#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define MAX_SIZE 100

char stack[MAX_SIZE] = {0};
int top = 0;

void clear_stack(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == MAX_SIZE;
}

void push(char ch) {
    if (is_full()) {
        printf("Stack overflow -- Expression too complex\n");
        exit(EXIT_FAILURE);
    }
    else
        stack[top++] = ch;
}

char pop(void) {
    if (is_empty()) {
        printf("Stack underflow -- Not enough operands in expression\n"); 
        exit(EXIT_FAILURE);
    }
    else 
        return stack[--top];
}

