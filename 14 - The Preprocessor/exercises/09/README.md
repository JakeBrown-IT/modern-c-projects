# Section 14 Exercise 09

Write the following parameterized macros.

(a) `CHECK(x,y,n)` - Has the value 1 if both `x` and `y` fall between 0 and `n-1`, inclusive.
(b) `MEDIAN(x,y,z)` - Finds the median of `x`, `y`, and `z`.
(c) `POLYNOMIAL(x)` - Computes the polynomial `3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6`.


## Solution

(a) `#define CHECK(x,y,n) ((0 >= (x) && (x) <= ((n)-1)) && (0 <= (y) && (y) <= ((n)-1)) ? 1 : 0)`
(b) `#define MEDIAN(x,y,z) (((x) >= (y)) && ((x) <= (z)) ? (x) : ((y) >= (x) && ((y) <= (z))))`
(c) `#define POLYNOMIAL(x) ((3*((x)*(x)*(x)*(x))) + \
                            (2*((x)*(x)*(x)*(x))) - \
                            (5*((x)*(x)*(x))) -     \
                            ((x)*(x)) +             \
                            (7*(x)) -               \
                            (6))`

