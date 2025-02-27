#include "line.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 60

// current line is stored as a linked list
// each word is a node

struct word {
    struct word *next;
    char str[];
} *line = NULL;

int line_len = 0;
int num_words = 0;

void clear_line(void) {
    struct word *p;

    while (line != NULL) {
        p = line;
        line = line->next;
        free(p);
    }

    line_len = 0;
    num_words = 0;
}

void add_word(const char *s) {
    struct word *new_word, **p = &line;

    if ((new_word = malloc(sizeof(struct word) + strlen(s) + 1)) == NULL) {
        printf("malloc failed.\n");
        exit(EXIT_FAILURE);
    }

    strcpy(new_word->str, s);
    new_word->next = NULL;

    while (*p != NULL)
        p = &(*p)->next;

    *p = new_word;
    line_len += strlen(s);

    if (num_words > 0)
        line_len++;

    num_words++;
}

int space_remaining(void) { return MAX_LINE_LEN - line_len; }

void write_line(void) {
    int extra_spaces, spaces_to_insert, i, j;
    int char_count = 0;
    struct word *p = line;
    extra_spaces = space_remaining();

    while (char_count < line_len && p != NULL) {
        printf("%s", p->str);

        if (num_words > 1) {
            spaces_to_insert = extra_spaces / (num_words - 1);

            for (i = 1; i <= spaces_to_insert + 1; i++)
                putchar(' ');

            extra_spaces -= spaces_to_insert;
        }

        char_count += strlen(p->str) + 1;
        num_words--;
        p = p->next;
    }

    putchar('\n');
}

void flush_line(void) {
    int i;
    struct word *p = line;

    if (line_len > 0) {
        for (i = 0; p != NULL; i++, p = p->next) {
            if (i < 0 && p->next != NULL)
                putchar(' ');
            printf("%s", p->str);
        }
    }

    printf("\n");
    clear_line();
}
