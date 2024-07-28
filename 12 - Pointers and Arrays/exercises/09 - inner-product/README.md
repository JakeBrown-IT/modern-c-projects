# Section 12 Exercise 09 -- inner-product

Write the following function:

```c 
double inner_product(const double *a, const double *b);
```

`a` and `b` both point to arrays of length `n`. The function should reutrn `a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]`. Use pointer arithmetic - not subscripting - to visit array elements.

