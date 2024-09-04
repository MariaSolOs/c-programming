#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
    const char *ranks[] = {"Two",   "Three", "Four", "Five", "Six",
                           "Seven", "Eight", "Nine", "Ten",  "Jack",
                           "Queen", "King",  "Ace"};
    const char *suits[] = {"clubs", "diamonds", "hearts", "spades"};
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};

    srand(time(NULL));

    int num_cards;
    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand:\n");
    int rank, suit;
    while (num_cards > 0) {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;
            num_cards--;
            printf("%s of %s\n", ranks[rank], suits[suit]);
        }
    }

    return 0;
}
