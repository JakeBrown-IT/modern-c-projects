# Section 12 Exercise 01 -- pointer-expressions

Suppose that the following declarations are in effect:

```c
int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
int *p = &a[1], *q = &a[5];
```

(a) What is the value of `*(p + 3)`?
(b) What is the value of `*(q - 3)`?
(c) What is the value of `q - p`?
(d) Is the condition `p < q` true or false?
(e) Is the condition `*p < *q` true or false?

