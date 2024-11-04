# Section 14 Exercise 15

Suppose that a program needs to display messages in either Engligsh, French, or Spanish. Using conditional compilation, write a program fragment that displays one of the following three messages, depending on whether or not the specified macro is defined:

`Insert Disk 1`         (if `ENGLISH` is defined)
Inserez Le Disque 1     (if `FRENCH` is defined)
Inserte El Disco 1      (if `SPANISH` is defined)
```


## Solution

```c
#if defined(ENGLISH)
#define INSERT "Insert Disk 1"
#
#elif defined(FRENCH)
#define INSERT "Interez Le Disque 1"
#
#elif defined(SPANISH)
#define INSERT "Inserte El Disco 1"
#
#endif

printf("%s\n", INSERT);

```
