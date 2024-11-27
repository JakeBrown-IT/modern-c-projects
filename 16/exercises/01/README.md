# Section 16 Exercise 01

In the following declarations, the `x` and `y` structures have members named `x` and `y`:

```c
struct { int x, y; } x;
struct { int x, y; } y;
```

Are these declarations legal on an individual basis? Could both declarations appear as shown in a program? Justify your answer.


## Solution

The declarations are legal on an individual basis, as well as together, as the members are only accessible by using the `.` operator, in addition, their scope is limited to the structure they are defined in.

If the declarations were to appear inside a function, then they would be legal as they have automatic storage duration, otherwise they would need to be declared as `static`.

