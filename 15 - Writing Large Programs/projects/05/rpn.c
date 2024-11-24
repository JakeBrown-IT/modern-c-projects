#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include "stack.h"

int main(void) {
    char ch, lop, rop;

    while (true) {
        printf("Enter an RPN expression: ");

        while ((ch = getchar()) != '\n') {

            if (isdigit(ch)) 
                push(ch - '0');
            else 
                switch (ch) {
                    case '+':
                        push(pop() + pop());
                        break;

                    case '-':
                        rop = pop();
                        lop = pop();
                        push(lop - rop);
                        break;

                    case '*':
                        push(pop() * pop());
                        break;

                    case '/':
                        rop = pop();
                        lop = pop();
                        push(lop / rop);
                        break;

                    case '=':
                        printf("Value of expression: %d\n", pop());
                        clear_stack();
                        break;

                    case ' ':
                        break;

                    default:
                        exit(EXIT_FAILURE);

            }
        }
    }
}

