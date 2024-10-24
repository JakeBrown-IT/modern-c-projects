# Section 14 Exercise 10

Functions can often - but not always - be written as parameterized macros. Discuss what characteristics of a function would make it unsuitable as a macro.


## Solution

If a the function is recursive, it will be better suited to a function rather than a parameterized macro for more control and prevention against errors.

x > y && x < z ? x : y > x && y < z ? y : z
