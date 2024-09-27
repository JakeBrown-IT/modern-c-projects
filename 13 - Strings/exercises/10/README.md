# Section 13 Exercise 10

The following function supposedly creates an identical copy of a string. What's wrong with the function?

```c
char *duplicate(const char *p)
{
    char *q;

    strcpy(q, p);
    return q;
}
```

## Solution

As the pointer `q` is not declared outside of the function, the string literal it points to will not be accessible outside the scope of the function.
