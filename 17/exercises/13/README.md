# Section 17 Exercise 13

The following function is supposed to insert a new node into its proper place in an ordered list, returning a pointer to the first node in the modified list. Unfortunately, the function doesn't work correctly in all cases. Explain what's wrong with it and show how to fix it. Assume that the `node` structure is the one defined in Section 17.5.
```c
struct node *insert_into_ordered_list(struct node *list,
                                      struct node *new_node) {
    struct node *cur = list, *prev = NULL;

    while (cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
    }

    prev->next = new_node;
    new_node->next = cur;

    return list;
}
```


# Solution

The current function doesn't account for the edge case of the node needing to be inserted at the start of the linked list, replacing the current head.

```c
struct node *insert_into_ordered_list(struct node *list,
                                      struct node *new_node) {
    struct node *cur = list, *prev = NULL;

    while (cur && cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
    }

    if (prev == NULL) {
        new_node->next = cur;
        list = new_node;
    } else {
        prev->next = new_node;
        new_node->next = cur;
    }

    return list;
}
```

