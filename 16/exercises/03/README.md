# Section 16 Exercise 03

(a) Show how to declare a tag named `complex` for a structure with two members,
`real` and `imaginary`, of type `double`.

(b) Use the `complex` tag to declare variables named `c1`, `c2`, and `c3`.

(c) Write a function named `make_complex` that stores its two arguments (both of
type `double`) in a `complex` structure, then returns the structure.

(d) Write a function named `add_complex` that adds the corresponding members of
its arguments (both `complex` structures), then returns the result (another
`complex` structure).


## Solution

(a) 

```c
struct complex {
    double real;
    double imaginary;
};
```

(b)

```c
struct complex c1, c2, c3;
```

(c)

```c
struct complex make_complex(double real, double imaginary)
{
    return (struct complex) { real, imaginary };
}
```

(d)

```c
struct complex add_complex(struct complex s1, struct complex s2)
{
    return (struct complex) { s1.real + s2.real, s1.imaginary + s2.imaginary }; 
}
```
