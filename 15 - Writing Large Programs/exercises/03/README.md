# Section 15 Exercise 03

We saw that writing `#include <file>` instead of `#include "file"` may not work if the file is one that we've written. Would there be any problem with writing `#include "file"` instead of `#include <file>` if file is a system header?


## Solution

Yes. This is because the compiler looks in a specific location for system header files, and so including a file with the same name as a system header would only look in the current file's folder, and could end up using the local file as the system header unintentionally.

