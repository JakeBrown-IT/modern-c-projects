# Section 14 Exercise 05

Let `TOUPPER(c)` be the following macro:
```c 
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
```
Let `s` be a string and let `i` be an `int` variable. Show the output produced by each of the following program fragments.

(a) ```c 
    strcpy(s, "abcd");
    i = 0;
    putchar(TOUPPER(s[++i]));
    ```
(b) ```c 
    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));
    ```

## Solution

(a) `'B'`
(b) `'1'`

