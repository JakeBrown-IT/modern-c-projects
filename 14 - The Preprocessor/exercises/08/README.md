# Section 14 Exercise 08

Suppose we want a macro that expands into a string containing the current line number and file name. In other words, we'd like to write
```c 
const char *str = LINE_FILE;
```
and have it expand into
```c 
const char *str = "Line 10 of file foo.c";
```
where `foo.c` is the file containing the program and 1- is the line on which the invocation of `LINE_FILE` appears. Warning: This exercise is for experts only. Be sure to read the Q&A section carefully before attempting!


## Solution

```c 
#define STRINGIZE(x) (#x) 
#define LINENUM(x) (STRINGIZE(x))
#define LINE_FILE ("Line " LINENUM(__LINE__) " of file "__FILE__)
```
