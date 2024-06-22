/* Functions Exercise 11 */

#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n);

int main(void)
{
    int n, i = 0;
    char grades[100] = {0};

    printf("Enter the number of grades: ");
    scanf("%d", &n);

    printf("Enter %d letter grades (A-F): ");
    for (i = 0; i < n; i++)
    {
        scanf("%c", &grades[i]);
    }

    printf("GPA: %.1f\n", compute_GPA(grades, n));

    return 0;
}

float compute_GPA(char grades[], int n)
{
    float gpa = 0.0f;
    int i = 0;

    for (; i < n; i++)
    {
        switch (toupper(grades[i]))
        {
        case 'A':
            gpa += 4.0f;
            break;
        case 'B':
            gpa += 3.0f;
            break;
        case 'C':
            gpa += 2.0f;
            break;
        case 'D':
            gpa += 1.0f;
            break;
        default:
            break;
        }
    }

    return gpa / n;
}