# Section 17 Exercise 11

Write the following function:
```c
int count_occurrences(struct node *list, int n);
```
The `list` parameter points to a linked list; the functino should return the number of times that `n` appears in this list. Assume that the `node` structure is the one defined in Section 17.5.


# Solution
```c
int count_occurrences(struct node *list, int n) {
    int count = 0;
    struct node *cur = list;

    while (cur) {
        if (cur->value == n)
            count++;

        cur = cur->next;
    }

    return count;
}
```
