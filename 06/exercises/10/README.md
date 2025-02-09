# Section 06 Exercise 10

Show how to replace a `continue` statement by an equivalent `goto` statement.


# Solution

This code only prints the even numbers up to 10.
```c
for (i = 0; i <= 10; i++) {
    if (i % 2 == 1)
        continue;
    printf("%d ", i);
}
```
To use `goto` instead of `continue`, simply add a label after the `printf` statement and change `continue` to `goto end`
```c
for (i = 0; i <= 10; i++) {
    if (i % 2 == 1)
        goto end;
    printf("%d ", i);
    end:
}
```
