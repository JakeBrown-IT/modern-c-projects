# Section 14 Exercise 01

Write parameterized macros that compute the following values.

(a) The cube of `x`.
(b) The remainder when `n` is divided by 4.
(c) 1 if the product of `x` and `y` is less than 100, 0 otherwise.

Do your macros always work? If not, describe what arguments would make them fail.


## Solution

(a) `#define CUBE(x) ((x) * (x) * (x))` - Arguments must be of a numeric type to work.
(b) `#define MOD4(n) ((n) % 4)` - Arguments must be of a numeric type to work.
(c) `#define MULT(x,y) (((x) * (y)) < 100 ? 1 : 0)` - Arguments must be of a numeric type to work.

