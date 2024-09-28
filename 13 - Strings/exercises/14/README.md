# Section 13 Exercise 14

What does the following function print?

```c
#include <stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
}
```

## Solution

The function will print `Grinch`, as each character is decremented via `p`.
