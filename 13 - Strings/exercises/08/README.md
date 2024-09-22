# Section 13 Exercise 08 

What will be the value of the string `str` after the following statements have been executed?
```c
strcpy(str, "tire-bouchon");
strcpy(&str[4], "d-or-wi");
strcpy(str, "red?");
```

## Solution

`str = "tire-d-or-wired?\0";`
