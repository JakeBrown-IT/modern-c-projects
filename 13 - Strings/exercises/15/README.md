# Section 13 Exercise 15

Let `f` be the following function:

```c
int f(char *s, char *t)
{
    char *p1, *p2;

    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break;
        if (*p2 == '\0') break;
    }
    return p1 - s;
}
```

(a) What is the value of `f("abcd", "babc");`
(b) What is the value of `f("abcd", "bcd");`
(c) In general, what value does `f` return when passed two strings `s` and `t`?


## Solution

(a) `0`
(b) `1`
(c) `f` returns the index of the first character in `s` which has a matching character in `t`.
