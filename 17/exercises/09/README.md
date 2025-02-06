# Section 17 Exercise 09

True or false: If `x` is a structure and `a` is a member of that structure, then `(&x)->a` is the same as `x.a`. Justify your answer.


# Solution

True. As `->` is the same as `* .`, `(&x)->a` becomes `*(&x).a`, and the `*` and `&` cancel each other out, resulting in `x.a`.

