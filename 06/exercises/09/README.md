# Section 06 Exercise 09

Translate the `for` statement of Exercise 8 into an equivalent `while` statement. You will need one statement in addition to the `while` loop itself.


# Solution

```c
int i = 10;

while (i >= 1) {
    printf("%d ", i++);
    i /= 2;
}
```

