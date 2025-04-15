# Section 18 Exercise 12

(a) Write a complete description of the type of the function `f`, assuming that it's declared as follows:

```c
int (*f(float (*)(long), char *))(double);
```

(b) Give an example showing how `f` would be called.


# Solution

(a) A function `f` with two arguments, a pointer to a function with a `long` `int` argument returning a `float`, and a pointer to a `char`, returning a pointer to a function with a `double` argument, which returns an `int`.

(b) `int x = *f(g, &ch)(1.5);`

