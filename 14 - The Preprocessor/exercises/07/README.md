# Section 14 Exercise 07

Let `GENERIC_MAX` be the following macro:
```c 
#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}
```
(a) Show the preprocessor's expansions of `GENERIC_MAX(long)`.
(b) Explain why `GENERIC_MAX` doesn't work for basic types such as `unsigned long`.
(c) Describe a technique that would allow us to use `GENERIC_MAX` with basic types such as `unsigned long`. Don't change the definition of `GENERIC_MAX`.


## Solution

(a) `long long_max(long x, long y) { return x < y ? x : y; }`
(b) Any type with a space in their name will not work as the `##` operator will return a function with an illegal type definition.
(c) Using `typedef` to create a new type equivalent to `unsigned long` which has no spaces in its name.

