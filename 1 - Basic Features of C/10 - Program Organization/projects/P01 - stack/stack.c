/** Program Organization Project 01 - stack.c */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // C99 Only

#define STACK_SIZE 100

// External variables
char stack[STACK_SIZE];
int top = 0;

void stack_overflow();
void stack_underflow();
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
int pop(void);

int main(void)
{
    char ch, check;

    printf("Enter parentheses and/or braces: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == '(' || ch == '{')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            check = pop();

            if (check == '(')
            {
                continue;
            }
            else
            {
                printf("Parentheses/braces aren't nested properly\n");
                return 0;
            }
        }
        else if (ch == '}')
        {
            check = pop();

            if (check == '{')
            {
                continue;
            }
            else
            {
                printf("Parentheses/braces aren't nested properly\n");
                return 0;
            }
        }
        else
        {
            continue;
        }
    }

    if (top > 0)
        printf("Parentheses/braces aren't nested properly\n");
    else
        printf("Parentheses/braces are nested properly\n");

    return 0;
}

void stack_overflow(void)
{
    printf("Stack overflow\n");
}

void stack_underflow(void)
{
    printf("Stack underflow\n");
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char ch)
{
    if (is_full())
        stack_overflow();
    else
        stack[top++] = ch;
}

int pop(void)
{
    if (is_empty())
    {
        stack_underflow();
        exit(0);
    }
    else
        return stack[--top];
}