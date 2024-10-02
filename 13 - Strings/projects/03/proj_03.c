/* File: proj_03.c 
 * Author: Jake Brown
 * Created: 02-10-2024
 * Purpose: Section 13 Project 03
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char rank_code[13][9] = {"Two of", "Three of", "Four of", 
                                "Five of", "Six of", "Seven of",
                                "Eight of", "Nine of", "Ten of",
                                "Jack of", "Queen of", "King of",
                                "Ace of"};
    const char suit_code[4][9] = {"Clubs", "Spades", "Hearts", "Diamonds"};

    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand:\n");
    
    while (num_cards > 0) {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;

        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;
            num_cards--;
            printf("%s %s\n", rank_code[rank], suit_code[suit]);
        } 
    }
    printf("\n");

    return 0;
}