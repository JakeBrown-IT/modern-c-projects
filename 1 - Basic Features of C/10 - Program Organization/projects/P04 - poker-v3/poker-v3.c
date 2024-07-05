/** Program Organization Project 04 - poker-v3.c */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /* C99 Only */

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* External variables */
int hand[NUM_CARDS][2];
bool royal, straight, flush, four, three;
int pairs; /* Can be 0, 1, or 2 */

/* Prototypes */
void read_cards(void);
bool check_duplicate(int rank, int suit, int hand[NUM_CARDS][2], int cards_read);
void analyze_hand(void);
void print_result(void);

/* Main */
int main(void)
{
    for (;;)
    {
        read_cards();
        analyze_hand();
        print_result();
    }

    return 0;
}

void read_cards(void)
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    while (cards_read < NUM_CARDS)
    {
        bad_card = false;

        printf("Enter a card: ");
        rank_ch = getchar();

        switch (rank_ch)
        {
        case '0':
            exit(EXIT_SUCCESS);
        case '2':
            rank = 0;
            break;
        case '3':
            rank = 1;
            break;
        case '4':
            rank = 2;
            break;
        case '5':
            rank = 3;
            break;
        case '6':
            rank = 4;
            break;
        case '7':
            rank = 5;
            break;
        case '8':
            rank = 6;
            break;
        case '9':
            rank = 7;
            break;
        case 't':
        case 'T':
            rank = 8;
            break;
        case 'j':
        case 'J':
            rank = 9;
            break;
        case 'q':
        case 'Q':
            rank = 10;
            break;
        case 'k':
        case 'K':
            rank = 11;
            break;
        case 'a':
        case 'A':
            rank = 12;
            break;
        default:
            bad_card = true;
        }

        suit_ch = getchar();

        switch (suit_ch)
        {
        case 'c':
        case 'C':
            suit = 0;
            break;
        case 'd':
        case 'D':
            suit = 1;
            break;
        case 'h':
        case 'H':
            suit = 2;
            break;
        case 's':
        case 'S':
            suit = 3;
            break;
        default:
            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ')
                bad_card = true;

        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (check_duplicate(rank, suit, hand, cards_read))
            printf("Duplicate card; ignored.\n");
        else
        {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}

bool check_duplicate(int rank, int suit, int hand[NUM_CARDS][2], int cards_read)
{
    int i;

    for (i = 0; i < cards_read; i++)
        if (hand[i][0] == rank && hand[i][1] == suit)
            return true;
            
    return false;
}

void analyze_hand(void)
{
    int card, matches;

    royal = false;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    /* Selection sort hand for better analyzing */
    int i, j, min, suit, rank;

    for (i = 0; i < NUM_CARDS; i++) {
        min = i;

        for (j = i + 1; j < NUM_CARDS; j++) 
            if (hand[j][0] < hand[min][0])
                min = j;
        
        rank = hand[i][0];
        suit = hand[i][1];
        hand[i][0] = hand[min][0];
        hand[i][1] = hand[min][1];
        hand[min][0] = rank;
        hand[min][1] = suit;
    }

    /* Check for flush */
    for (card = 1; card < NUM_CARDS; card++) {
        if (hand[card][1] != hand[0][1])
            break;
        if (card == NUM_CARDS - 1)
            flush = true;
    }

    /* Check for straight */
    for (card = 1; card < NUM_CARDS; card++) {
        if (hand[card][0] - hand[card - 1][0] != 1)
            break;
        if (card == NUM_CARDS - 1)
            straight = true;
    }

    /* Check for royal flush */    
    if (straight && flush)
        if (hand[4][0] == 12 && hand[0][0] == 8)
            royal = true;

    /* Check for 4-of-a-kind, 3-of-a-kind, and pairs */
    for (i = 0; i < NUM_CARDS; i++) {
        matches = 0;

        for (j = i + 1; j < NUM_CARDS; j++)
            if (hand[j][0] == hand[i][0])
                matches++;

        if (matches == 1) pairs++;
        if (matches == 2) three = true;
        if (matches == 3) four = true;
    }
}

void print_result(void)
{
    if (royal)
        printf("Royal flush");
    else if (straight && flush)
        printf("Straight flush");
    else if (four)
        printf("Four of a Kind");
    else if (three && pairs == 1)
        printf("Full house");
    else if (flush)
        printf("Flush");
    else if (straight)
        printf("Straight");
    else if (three)
        printf("Three of a Kind");
    else if (pairs == 2)
        printf("Two pairs");
    else if (pairs == 1)
        printf("Pair");
    else
        printf("High card");

    printf("\n\n");
}
