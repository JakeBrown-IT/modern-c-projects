# Section 16 Exercise 17

Suppose that `b` and `i` are declared as follows:

```c
enum {FALSE, TRUE} b;
int i;
```

Which of the following statements are legal? Which ones are "safe" (always yield a meaningful result)?

(a) `b = FALSE;`
(b) `b = i;`
(c) `b++;`
(d) `i = b;`
(e) `i = 2 * b + 1;`


# Solution

(a) Legal
(b) Legal but Unsafe: Could potentially assign `b` outside its range.
(c) Legal but Unsafe: Could potentially assign `b` outside its range.
(d) Legal
(e) Legal

