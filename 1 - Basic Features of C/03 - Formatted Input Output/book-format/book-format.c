#include <stdio.h>

int main(void) {
    int gsi, group, publisher, item, check;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &group, &publisher, &item, &check);

    printf("GSI Prefix: %d\n", gsi);
    printf("Group Identifier: %d\n", group);
    printf("Publisher Code: %d\n", publisher);
    printf("Item Number: %d\n", item);
    printf("Check Digit: %d\n", check);

    return 0;
}
