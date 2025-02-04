# Section 17 Exercise 04

Suppose that the following declarations are in effect:
```c
struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };
struct rectangle *p;
```
Assume that we want `p` to point to a `rectangle` structure whose upper left corner s at (10,25) and whose lower right corner is at (20,15). Write a series of statements that allocate such a structure and initialise it as indicated.


# Solution

```c
if (p = (struct rectangle *) malloc(sizeof(struct rectangle)) != NULL) {
    p->upper_left = { 10, 25 };
    p->lower_right = { 20, 15 };
}
else
    printf("malloc failed\n");
```

