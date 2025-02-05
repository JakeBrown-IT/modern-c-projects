# Section 17 Exercise 07

The following loop is suppoed to delete all nodes from a linked list and release the memory that they occupy. Unfortunately, the loop is incorrect. Explain what's wrong with it and show how to fix the bug.
```c
for (p = first; p != NULL; p = p->next)
    free(p);
```


# Solution

The code frees the memory allocated to `p`, then attempts to set `p` to its `next` member. The fix is to store the `next` node in a temporary pointer, then assign `p` after freeing it:
```c
for (p = first; p != NULL; p = p->next) {
    temp = p->next;
    free(p);
    p = temp;
}
```

