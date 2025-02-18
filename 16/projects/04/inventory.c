/* HEADERS */
#include <stdio.h>
#include "inventory.h"
#include "readline.h"
#include "quicksort.h"

/* PROTOTYPES */
int find_part(const struct part inventory[], int num_parts, int number);
void insert(struct part inventory[], int *num_parts);
void search(const struct part inventory[], int num_parts);
void update(struct part inventory[], int num_parts);
void print(struct part inventory[], int num_parts);
void change_price(struct part inventory[], int num_parts);

/* MAIN */
int main(void)
{
    char code;
    int num_parts;
    struct part inventory[MAX_PARTS];

    for (;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')
            ;
        switch (code) {
            case 'i': insert(inventory, &num_parts);
                      break;
            case 's': search(inventory, num_parts);
                      break;
            case 'u': update(inventory, num_parts);
                      break;
            case 'p': print(inventory, num_parts);
                      break;
            case 'c': change_price(inventory, num_parts);
                      break;
            case 'q': return 0;
            default: printf("Illegal code\n");
        }
        printf("\n");
    }
}

/* FIND PART */
int find_part(const struct part inventory[], int num_parts, int number)
{
    int i;

    for (i = 0; i < num_parts; i++)
        if (inventory[i].number == number)
            return i;

    return -1;
}

/* INSERT */
void insert(struct part inventory[], int *num_parts)
{
    int part_number;

    if (*num_parts == MAX_PARTS) {
        printf("Database is full; can't add more parts.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    if (find_part(inventory, *num_parts, part_number) >= 0) {
        printf("Part already exists.\n");
        return;
    }

    inventory[*num_parts].number = part_number;

    printf("Enter part name: ");
    read_line(inventory[*num_parts].name, NAME_LEN);

    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[*num_parts].on_hand);
    
    printf("Enter price: ");
    scanf("%lf", &inventory[*num_parts].price);

    (*num_parts)++;
}

/* SEARCH */
void search(const struct part inventory[], int num_parts)
{
    int i, part_number;

    printf("Enter part number: ");
    scanf("%d", &part_number);

    i = find_part(inventory, num_parts, part_number);

    if (i >= 0) {
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
        printf("Price: %.2f\n", inventory[i].price);
    } else
        printf("Part not found.\n");
}

/* UPDATE */
void update(struct part inventory[], int num_parts)
{
    int i, part_number, change;

    printf("Enter part number: ");
    scanf("%d", &part_number);

    i = find_part(inventory, num_parts, part_number);

    if (i >= 0) {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);

        inventory[i].on_hand += change;
    } else
        printf("Part not found.\n");
}

/* PRINT */
void print(struct part inventory[], int num_parts)
{
    int i;

    quicksort(inventory, 0, num_parts - 1);

    printf("Part Number   Part Name               "
           "Quantity on hand     Price\n");

    for (i = 0; i < num_parts; i++)
        printf("%7d       %-25s%11d          $%7.2f\n", inventory[i].number,
                inventory[i].name, inventory[i].on_hand, inventory[i].price);
}

void change_price(struct part inventory[], int num_parts)
{
    int i, part_number;

    printf("Enter part number: ");
    scanf("%d", &part_number);

    i = find_part(inventory, num_parts, part_number);

    if (i >= 0) {
        printf("Enter new price: ");
        scanf("%lf", &inventory[i].price);
    } else {
        printf("Part not found.\n");
    }
}
