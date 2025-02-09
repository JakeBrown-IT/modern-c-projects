# Section 06 exercise 08

What output does the following `for` statement produce?
```c
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```


# Solution

```text
10 5 3 2 1 1 1 ...
```
It will print 1 infinitely a the condition of `i >= 1` always satisfied when `i` is incremented in the `printf` statement.

