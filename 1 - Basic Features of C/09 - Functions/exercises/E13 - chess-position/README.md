# Functions Exercise 13 - chess-position

Write the following function, which evaluates a chess position:

```c
int evaluate_position(char board[8][8]);
```

`board` represents a configuration of pieces on a chessboard, where the letters `K, Q, R, B, N,` and `P` represent White pieces, and the letters `k, q, r, b, n,` and `p` represent Black pieces. `evaluate_position` should sum the values of the White pieces (Q = 9, R = 5, B = 3, N = 3, P = `). It should also sum the values of the Black pieces (done in a similar way). The function will return the difference between the two numbers. This value will be positive if White has an advantage in material, and negative if Black has an advantage.
