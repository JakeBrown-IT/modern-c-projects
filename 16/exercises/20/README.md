# Section 16 exercise 20

Suppose that the `direction` vairable is declared in the following way:
```c
enum { NORTH, SOUTH, EAST, WEST } direction;
```
Let `x` and `y` be `int` variables. Write a `switch` statement that tests the value of `direction`, incrementing `x` if `direction` is `EAST`, decrementing `x` if `direction` is `WEST`, incrementing `y` if `direction` is `SOUTH`, and decrementing `y` if `direction` is `NORTH`.


# Solution

```c
switch (direction) {
    case EAST:
        x++;
        break;
    case WEST:
        x--;
        break;
    case SOUTH:
        y++;
        break;
    case NORTH:
        y--;
        break;
    default:
        break;
}
```
