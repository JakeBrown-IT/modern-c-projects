/** Program Organization Project 06 - rpn
 * 
 * Implements a stack to calculate and expression in reverse polish notation (rpn)
 * 
 * expression: if ch not number or operator, terminate
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_SIZE 100

/* External variables */
char stack[MAX_SIZE];
int top = 0;

/* Prototype functions */
void clear_stack(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);

/* Main function */
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

/* STACK FUNCTIONS */

/* Resets stack to empty */
void clear_stack(void) {
    top = 0;
}

/* Returns true if top == bottom of the stack */
bool is_empty(void) {
    return top == 0;
}

/* Returns true if top == top of the stack */
bool is_full(void) {
    return top == MAX_SIZE;
}

/* Pushes a character to the top of the stack */
void push(char ch) {
    if (is_full()) {
        printf("Stack overflow -- Expression too complex\n");
        exit(EXIT_FAILURE);
    }
    else
        stack[top++] = ch;
}

/* Pops the character from the top of the stack */
char pop(void) {
    if (is_empty()) {
        printf("Stack underflow -- Not enough operands in expression\n"); 
        exit(EXIT_FAILURE);
    }
    else 
        return stack[--top];
}
