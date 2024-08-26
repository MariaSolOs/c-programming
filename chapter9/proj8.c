#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void) {
    int roll1 = (rand() % 6) + 1;
    int roll2 = (rand() % 6) + 1;
    return roll1 + roll2;
}

bool play_game(void) {
    int point = 0, roll;

    while (1) {
        roll = roll_dice();
        printf("You roled: %d\n", roll);
        if (point == 0) {
            switch (roll) {
                case 7:
                case 11:
                    return true;
                case 2:
                case 3:
                case 12:
                    return false;
                default:
                    point = roll;
                    printf("Your point is %d\n", point);
            }
        } else if (roll == point || roll == 7) {
            return false;
        }
    }
}

int main(void) {
    srand(time(NULL));

    int wins = 0, losses = 0;
    char response;
    bool player_won;
    do {
        player_won = play_game();
        printf("You ");
        if (player_won) {
            wins += 1;
            printf("won");
        } else {
            losses += 1;
            printf("lose");
        }
        printf("!\n\nPlay again? ");
    } while (toupper(response = getchar()) == 'Y');

    printf("\nWins: %d\tLosses: %d\n", wins, losses);

    return 0;
}
