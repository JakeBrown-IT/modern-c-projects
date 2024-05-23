/* Programming Project 08 
 *
 * calculate average score for each student
 * 
 * Student No.  |  1  |  2  |  3  |  4  |  5 
 * Avr. Score   |  -  |  -  |  -  |  -  |  -
 * Total Score  |  -  |  -  |  -  |  -  |  -
 * 
 * calculate average, highest, and lowest score for each quiz
 *  
 * Quiz No.    |  1  |  2  |  3  |  4  |  5
 * Avr. Score  |  -  |  -  |  -  |  -  |  -
 * High Score  |  -  |  -  |  -  |  -  |  -
 * Low Score   |  -  |  -  |  -  |  -  |  -
 */

#include <stdio.h>

#define STUDENTS 5
#define SCORES 5

int main(void) {
    int grades[STUDENTS][SCORES] = {0};

    // assign all scores to students
    // iterate over rows
    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter scores for student %d: ", i + 1);
        // iterate over columns, to fill each slot up
        for (int j = 0; j < SCORES; j++) {
            scanf("%d", &grades[i][j]);
        }
    }

    // now we print each student number for the table
    printf("\nStudent No.  |  ");

    for (int i = 0; i < STUDENTS; i++) {
        printf("%5d  ", i + 1);
    }

    printf("\nTotal Score  |  ");

    int total;

    for (int i = 0; i < STUDENTS; i++) {
        total = 0;

        for (int j = 0; j < SCORES; j++) {
            total += grades[i][j];
        }

        printf("%5d  ", total);
    }

    printf("\nAvr. Score   |  ");

    double average;

    for (int i = 0; i < STUDENTS; i++) {
        average = 0;

        for (int j = 0; j < SCORES; j++) {
            average += grades[i][j];
        }

        average /= SCORES;

        printf("%5.3f  ", average);
    }

    printf("\n");

    // now for working out the quiz values
    printf("\nQuiz No.     |  ");

    int lowest, highest;

    for (int i = 0; i < STUDENTS; i++) {
        printf("%5d  ", i + 1);
    }

    printf("\nAvr. Score   |  ");

    for (int i = 0; i < STUDENTS; i++) {
        average = 0;

        for (int j = 0; j < SCORES; j++) {
            average += grades[j][i];
        }

        average /= SCORES;

        printf("%5.3f  ", average);
    }

    printf("\nHighest      |  ");

    for (int i = 0; i < STUDENTS; i++) {
        highest = grades[0][0];
        for (int j = 0; j < SCORES; j++) {
            if (grades[j][i] > highest) {
                highest = grades[j][i];
            }
        }
        printf("%5d  ", highest);
    }

    printf("\nLowest       |  ");

    for (int i = 0; i < STUDENTS; i++) {
        lowest = grades[0][0];
        for (int j = 0; j < SCORES; j++) {
            if (grades[j][i] < lowest) {
                lowest = grades[j][i];
            }
        }
        printf("%5d  ", lowest);
    }

    printf("\n");

    return 0;
}