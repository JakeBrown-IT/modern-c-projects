#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

struct node {
    int value;
    struct node *next;
};

struct node *top = NULL;

void make_empty(void) {
    struct node *temp;

    while (top != NULL) {
        temp = top;
        top = top->next;
        free(temp);
    }
}

bool is_empty(void) {
    return top == NULL;
}

bool push(int i) {
    struct node *new;

    if (new = malloc(sizeof(struct node)) == NULL)
        return false;

    new->value = i;
    new->next = top;
    top = new;

    return true;
}

int pop(void) {
    struct node *temp;
    int i;

    if (is_empty()) {
        printf("ERROR: STACK UNDERFLOW\n");
        exit(EXIT_FAILURE);
    }

    i = top->value;
    temp = top;
    top = top->next;
    free(temp);

    return i;
}
