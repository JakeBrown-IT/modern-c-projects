/*
 * Scrabble Score Calculator
 *
 * Enter the played scrabble word, and receive the score.
 * Each letter is worth a specific amount of points.
 * Allow the user to enter any combination of uppercase and lowercase.
 * Ignore any other input.
 *
 *  -- Thought Process --
 *
 *  Either an IF statement or SWITCH CASE statement to calculate the score
 *  IF is a long and slow method, not worth it imo.
 *  SWITCH CASE definitely the play here.
 *
 * */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int score;
  char ch;

  printf("Enter a word: ");

  ch = getchar();

  while (ch != '\n') {

    ch = toupper(ch);

    switch (ch) {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
      score++;
      break;
    case 'D':
    case 'G':
      score += 2;
      break;
    case 'B':
    case 'C':
    case 'M':
    case 'P':
      score += 3;
      break;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
      score += 4;
      break;
    case 'K':
      score += 5;
      break;
    case 'J':
    case 'X':
      score += 8;
      break;
    case 'Q':
    case 'Z':
      score += 10;
      break;
    default:
      break;
    }

    ch = getchar();
  }

  printf("Score: %d\n", score);

  return 0;
}
