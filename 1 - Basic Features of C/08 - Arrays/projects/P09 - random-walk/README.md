Section 08 - Arrays
Project 9

Write a program that generates a "random walk" across a 10x10 array. The array will 
contain characters (all '.' initially). The program must randomly "walk" from element 
to element, always going up, down, left, or right by one element. The elements visited
by the program will be labeled with the letters A through Z, in the order visited.
Here's an example of the desired output:

A . . . . . . . . .
B C D . . . . . . .
. F E . . . . . . .
H G . . . . . . . .
I . . . . . . . . .
J . . . . . . . Z .
K . . R S T U V Y .
L M P Q . . . W X .
. N O . . . . . . .
. . . . . . . . . .

Hint: Use the srand and rand functions (see deal.c) to generate random numbers. After
generating a number, look at its remainder when divided by 4. There are four possible
values for the remainder - 0, 1, 2, and 3 - indicating the direction of the next move.
Before performing a move, check that (a) it won' t go outside the array, and (b) it
doesn't take us to an element that already has a letter assigned. If either condition
is violated, try moving in another direction. If all four directions are blocked, the
program must terminate. Here's an example of premature termination:

A B G H I . . . . .
. C F . J K . . . .
. D E . M L . . . .
. . . . N O . . . .
. . W X Y P Q . . .
. . V U T S R . . .

Y is blocked on all four sides, so there's no place to put Z.





// we need to now calculate whether the target position is valid
        // if the target position x or y is less that 0 or greater than 10 then it is invalid
        
        if (target[0] < 0 || target[0] > 10 || target[1] < 0 || target[1] > 10) {
            printf("Target position (%d, %d) outside array bounds.\n");
            continue;
        }
        // if the target position is on an array slot that is already occupied, then it is invalid 
        else if (sizeof(board[target[1]][target[0]]) != sizeof('.')) {
            // printing the fresh board
        for (int i = 0; i < YDIM; i++) {
            for (int j = 0; j < XDIM; j++) {
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }
            printf("Target position already occupied.\n");
            continue;
        } else {
            // change current position
            position[0] = target[0];
            position[1] = target[1];

            // assign board the correct character
            board[position[0]][position[1]] = current;
        }

        // reset target position
        target[0] = 0;
        target[1] = 0;
    }

    // printing the fresh board
    for (int i = 0; i < YDIM; i++) {
        for (int j = 0; j < XDIM; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }