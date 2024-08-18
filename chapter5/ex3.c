#include <stdio.h>

int main(void) {
    int shares;
    float share_price;

    printf("Enter the number of shares: ");
    scanf("%d", &shares);
    printf("Enter the price per share: ");
    scanf("%f", &share_price);

    float trade_value = shares * share_price;
    float commission;
    if (trade_value < 2500.0f) {
        commission = 30.0f + 0.017f * trade_value;
    } else if (trade_value < 6250.0f) {
        commission = 56.0f + 0.0066f * trade_value;
    } else if (trade_value < 20000.0f) {
        commission = 76.0f + 0.0034f * trade_value;
    } else if (trade_value < 50000.0f) {
        commission = 100.0f + 0.0022f * trade_value;
    } else if (trade_value < 500000.0f) {
        commission = 155.0f + 0.0011f * trade_value;
    } else {
        commission = 255.0f + 0.0009f + trade_value;
    }

    if (commission < 39.0f) {
        commission = 39.0f;
    }

    float rival_commission = 33.0f + (shares < 2000 ? 0.03 : 0.02) * shares;

    printf("Commission: $%.2f\n", commission);
    printf("Rival commission: $%.2f\n", rival_commission);

    return 0;
}
