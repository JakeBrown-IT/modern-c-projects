# Section 16 Exercise 11

Suppose that `s` is the following structure:

```c
struct {
    double a;
    union {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} s;
```

If `char` values occupy one byte, `int` values occupy four bytes, and `double` values occupy eight bytes, how much space will a C compiler allocate for `s`? (Assume that the compiler leaves no "holes" between members.)


# Solution

A C compiler will allocate 20 bytes in total for the `s` structure, `union`'s require the memory space of the largest member, which is `c`, therefore being allocated 8 bytes.

