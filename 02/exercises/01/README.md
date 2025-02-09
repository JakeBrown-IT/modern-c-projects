# Section 02 Exercise 01

Create and run Kernighan and Ritchie's famous "hello, world" program:
```c
#include <stdio.h>

int main(void) {
    printf("hello, world\n");
}
```
Do you get a warning message from the compiler? If so, what's needed to make it go away?


# Solution

`return 0;` should be added after the `printf` statement.

