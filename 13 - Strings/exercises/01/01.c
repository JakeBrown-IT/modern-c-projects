#include <stdio.h>

int main(void) {
    printf("%c", '\n');     /* valid */
    // printf("%c", "\n");  /* invalid - %c expects an int/char, not a char* */
    // printf("%s", '\n');  /* invalid - %s expects a char*, not an int/char */
    printf("%s", "\n");     /* valid */
    // printf('\n');        /* invalid - printf first argument takes char*, not char */
    printf("\n");           /* valid */
    putchar('\n');          /* valid */
    // putchar("\n");       /* invalid - argument is a char, not char* */
    // puts('\n');          /* invalid - argument is a char*, not char */
    puts("\n");             /* valid */
    puts("");               /* valid */

    return 0;
}

