# Functions Project 07 - power

The `power` function of Section 9.6 can be made faster by having it calculate `x^n` in a different way. We first notice that if `n` is a power of 2, then `x^n` can be computed by squaring. For example, `x^4` is the squar eof `x^2`, so `x^4` can be computed usong only two multiplications instead of three. As it happens, this technique can be used even when `n` is not a power of 2. If `n` is even, we use the formula `x^n = (x^(n/2))^2`. If `n` is odd, then `x^n = x * x^(n-1)`. Write a recursive function that computes `x^n`. (The recursion ends when `n = 0`, in which case the function returns 1.) To test your function, write a program that asks the user to enter values for `x` and `n`, calls `power` to compute `x^n`, and then displays the value returned by the function.


x = 5
n = 4

5^4 = (5^(4 / 2))^2

power(5, 4 / 2)