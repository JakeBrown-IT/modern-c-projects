# Section 18 Exercise 05

State whether each of the following statements is true or false. Justify each answer.

(a) Every variable with static storage duration has file scope.
(b) Every variable declared inside a function has no linkage.
(c) Every variable with internal linkage has static storage duration.
(d) Every parameter has block scope.


# Solution

(a) False - if declared inside a function, the variable will only have block scope, but will retain its value throughout the program.
(b) False - every variable not declared with `extern` will have no linkage, the `extern` variable will have internal linkage if it was previously declared as `static`, and will have external linkage if not.
(c) True - a variable declared `static` will only have internal linkage as it cannot be accessed by other files.
(d) True - all parameters of a function can be accessed within said function.

