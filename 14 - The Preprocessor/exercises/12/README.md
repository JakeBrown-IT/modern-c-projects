# Section 14 Exercise 12

Suppose that the macro `M` has been defined as follows:
```c 
#define M 10
```

Which of the following tests will fail?
(a) `#if M`
(b) `#ifdef M`
(c) `#ifndef M`
(d) `#if defined(M)`
(e) `#if !defined(M)`


## Solution

(a) Passes
(b) Passes
(c) Fails - `M` is defined
(d) Passes
(e) Fails - `M` is defined

