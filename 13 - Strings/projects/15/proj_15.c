/* File: proj_15.c
 * Author: Jake Brown
 * Created: 17-10-2024
 * Purpose: Section 13 Project 15
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = 0;

void clear_stack(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
int evaluate_RPN_expression(const char *expression);

int main(void) {
    char ch, expression[MAX_SIZE];
    int i = 0;
     
    printf("Enter an RPN expression: ");

    while ((ch = getchar()) != '\n' && i < MAX_SIZE)
        expression[i++] = ch;

    printf("Value of expression: %d\n", evaluate_RPN_expression(expression));

    return 0;
}

int evaluate_RPN_expression(const char *expression) {
    int result = 0;
    char lop, rop;
    
    while (*expression) {
        if (isdigit(*expression)) 
            push(*expression - '0');
        else 
            switch (*expression) {
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
                    return pop();
                    break;
                case ' ':
                    break;
                default:
                    exit(EXIT_FAILURE);
            }
        
        expression++;
    }
    exit(EXIT_FAILURE);
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
