# Section 17 Exercise 06

Modify the `delete_from_list` function so that it uses only one pointer variable instead of two (`cur` and `prev`).


# Solution
```c
struct node *delete_from_list(struct node **list, int n) {
    struct node *cur = *list;

    while (cur) {
        if (cur->value == n) {
            *list = cur->next;
            free(cur);
            return *list;
        }
        list = &cur->next;
        cur = cur->next;
    }
}
```

