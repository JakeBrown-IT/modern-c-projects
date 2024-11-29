# Section 16 Exercise 04

Repeat Exercise 3, but this time using a type named `Complex`.


## Solution

(a) 
```c
typedef struct {
    double real;
    double imaginary;
} Complex;
```

(b)

```c
Complex c1, c2, c3;
```

(c)

```c
Complex make_complex(double real, double imaginary)
{
    return (Complex) { real, imaginary };
}
```

(d)

```c
Complex add_complex(double s1, double s2)
{
    return (Complex) { s1.real + s2.real, s1.imaginary + s2.imaginary };
}
```

