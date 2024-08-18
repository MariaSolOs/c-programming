#include <stdio.h>

int main(void) {
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Invalid grade");
        return 1;
    }

    printf("Letter grade: ");
    switch ((grade / 10) % 10) {
        case 0:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
            printf("F");
            break;
    }

    return 0;
}
