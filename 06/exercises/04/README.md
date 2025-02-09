# Section 06 Exercise 04

Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?

(a) `for (i = 0; i < 10; i++) ...`
(b) `for (i = 0; i < 10; ++i) ...`
(c) `for (i = 0; i++ < 10; ) ...`


# Solution

(c) is not equivalent to (a) and (b) as `i` is only incremented after the conditional is evaluated, whereas this is separate in the other two statements.

