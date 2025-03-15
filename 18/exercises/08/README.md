# Section 18 Exercise 08

Write a complete description of the type of `x` as specified by each of the following declarations.

(a) `char (*x[10])(int);`
(b) `int (*x(int))[5];`
(c) `float *(*x(void))(int);`
(d) `void (*x(int, void (*y)(int)))(int);`


# Solution

(a) `x` is an array of 10 pointers to functions with an `int` argument each returning `char`. 
(b) `x` is a function with an `int` argument, returning a pointer to an array of 5 `int`.
(c) `x` is a function with no arguments returning a pointer to a function with an  `int` argument, returning a pointer to a `float`.
(d) `x` is a function with both an `int` argument, and a pointer to a function with an `int` argument returning nothing. `x` returns a pointer to a function with an `int` returning nothing.


