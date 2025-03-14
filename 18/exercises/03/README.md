# Section 18 Exercise 03

List the storage duration (static or automatic), scope (block or file), and linkage (internal, external, or none) of each variable and parameter in the following file:

```c
extern float a;

void f(register double b)
{
    static int c;
    auto char d;
}
```


# Solution

`a`: static, file, external.
`b`: automatic, block, none.
`c`: static, block, none.
`d`: automatic, block, none.

