# Section 12 Exercise 12 -- find-two-largest

Write the following function:

```c
void find_two_largest(const int *a, int n, int *largest, int *second_largest);
```

`a` points to an array of length `n`. The function searches the array for its largest and second-largest elements, storing them in the variables pointed to by `largest` and `second_largest`, respectively. Use pointer arithmetic - not subscripting - to visit array elements.
