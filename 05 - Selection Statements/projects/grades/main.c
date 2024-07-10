#include <stdio.h>

int main(void) {
    int grade, tens, units;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    
    if (grade > 100 || grade < 0) {
        printf("Invalid Grade entered.\n");
        return 0;
    }

    tens = grade / 10;
    
    switch (tens) {
        case 9:
            printf("Letter grade: A\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        default:
            printf("Letter grade: F\n");
            break;
    } 

    return 0;
}
