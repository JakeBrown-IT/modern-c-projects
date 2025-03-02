#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LEN 20

int read_line(char str[], int n);
int compare_words(const void *w1, const void *w2);
void *my_malloc(size_t bytes);

int main(void) {
    char **words = NULL, *word = NULL;
    int i, size = 1, word_count = 0;

    words = (char **)my_malloc((size_t)sizeof(char *));

    for (i = 0;; i++) {
        word = (char *)my_malloc((size_t)WORD_LEN + 1);

        printf("Enter word: ");

        read_line(word, WORD_LEN);

        if (word[0] == '\0')
            break;

        *(words + i) = word;
        word_count++;

        if (size == word_count) {
            if ((words = (char **)realloc(words, (size_t)sizeof(char *) *
                                                     (size += 1))) == NULL) {
                printf("realloc failed.\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    qsort(words, word_count, sizeof(char *), compare_words);
    printf("\nIn sorted order: ");

    for (i = 0; i < word_count; i++)
        printf("%s ", *(words + i));

    printf("\n");

    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';

    return i;
}

void *my_malloc(size_t bytes) {
    void *p;

    if ((p = malloc(bytes)) == NULL) {
        printf("malloc failed.\n");
        exit(EXIT_FAILURE);
    }

    return p;
}

int compare_words(const void *w1, const void *w2) {
    return strcmp(*(char **)w1, *(char **)w2);
}
