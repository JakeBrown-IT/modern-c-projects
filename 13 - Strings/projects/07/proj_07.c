/* File: proj_07.c
 * Author: Jake Brown
 * Created: 08-10-2024
 * Purpose: Section 13 Project 07
 */

#include <stdio.h>

int main(void) {
    int num;

    char *words[27] = { 
        "one", "two", "three", "four", "five",
        "six", "seven", "eigth", "nine", "ten", 
        "eleven", "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen", "seventeen", "eighteen", "nineteen", "twenty", 
        "thirty", "fourty", "fifty", "sixty", "seventy",
        "eighty", "ninety"
    };

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("You entered the number: ");

    if (num < 20) 
        printf("%s", words[num - 1]);
    else 
        printf("%s-%s", words[(num / 10) + 17], words[(num % 10) - 1]);
    
    
    return 0;
}

