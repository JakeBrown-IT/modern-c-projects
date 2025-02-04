# Section 17 Exercise 03

Write the following function:
```c
int *create_array(int n, int initial_value);
```
The function should return a pointer to a dynamically allocated `int` array with `n` members, each of which is initialised to `initial_value`. The value should be `NULL` if the array can't be allocated.


# Solution
```c
int *create_array(int n, int initial_value) {
    int *arr, *p;

    if (arr = (int*) malloc(n * sizeof(int)) != NULL) {
        for (p = arr; p < arr + n; p++)
            *p = initial_value;

        return arr;
    }

    printf("malloc failed\n");
    return NULL;
}
```
