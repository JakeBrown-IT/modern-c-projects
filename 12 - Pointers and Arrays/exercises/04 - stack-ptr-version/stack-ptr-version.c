/** Section 12 Exercise 04
 * Author -- Jake Brown
 * Title  -- stack-ptr-version.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
char stack[STACK_SIZE];
char *top_ptr = &stack[0];

/* prototypes */
void stack_overflow(void);
void stack_underflow(void);
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

    if (top_ptr > &stack[0])
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
    top_ptr = &stack[0];
}

bool is_empty(void)
{
    return top_ptr == &stack[0];
}

bool is_full(void)
{
    return top_ptr == &stack[STACK_SIZE - 1];
}

void push(char ch)
{
    if (is_full()) {
        stack_overflow();
        exit(0);
    }
    else
        *top_ptr++ = ch;
}

int pop(void)
{
    if (is_empty())
    {
        stack_underflow();
        exit(0);
    }
    else
        return *--top_ptr;
}
