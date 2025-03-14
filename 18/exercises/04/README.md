# Section 18 Exercise 04

Let `f` be the following function. What will be the value of `f(10)` if `f` has never been called before? What will be the value of `f(10)` if `f` has been called five times previously?

```c
int f(int i)
{
    static int j = 0;
    return i * j++;
}
```


# Solution

First time: `f(10)` will yield `0` from `10 * 0`.
Sixth time: `f(10)` will yield `50` from `10 * 5`.

