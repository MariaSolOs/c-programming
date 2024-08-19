#include <stdio.h>

int main(void) {
    int gs1_prefix, group_id, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &publisher_code,
          &item_number, &check_digit);
    printf(
        "GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem "
        "number: %d\nCheck digit: %d\n",
        gs1_prefix, group_id, publisher_code, item_number, check_digit);

    return 0;
}
