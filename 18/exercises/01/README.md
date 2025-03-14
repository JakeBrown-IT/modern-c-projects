# Section 18 Exercise 01

For each of the following declarations, identify the storage class, type qualifiers, type specifiers, declarators, and initializers.

(a) `static char **lookup(int level);`
(b) `volatile unsigned long io_flags;`
(c) `extern char *file_name[MAX_FILES], path[];`
(d) `static const char token_buf[] = "";`


# Solution

(a) `static` is the storage class, `char` is the type specifier, and `**lookup(int level)` is the declarator.
(b) `volatile` is the type qualifier, `unsigned long` are the type specifiers, and `io_flags` is the declarator.
(c) `extern` is the storage class, `char` is the type specifier, and `*file_name[MAX_FILES], path[]` are the declarators.
(d) `static` is the storage class, `const` is the type qualifier, `char` is the type specifier, `token_buf[]` is the declarator, and `""` is the initializer.

