#include <stdio.h>

#define N 5

int main(void) {
    int student_total[N] = {0};
    int quiz_total[N] = {0};
    int quiz_max[N];
    int quiz_min[N];
    int n;

    for (int student = 0; student < N; student++) {
        printf("Enter grades for student #%d: ", student + 1);
        for (int q = 0; q < N; q++) {
            scanf("%d", &n);
            student_total[student] += n;
            quiz_total[q] += n;

            if (student == 0 || n > quiz_max[q]) {
                quiz_max[q] = n;
            }
            if (student == 0 || n < quiz_min[q]) {
                quiz_min[q] = n;
            }
        }
    }

    printf("\nStudent  Total score  Average score\n");
    for (int i = 0; i < N; i++) {
        printf("%5d%10d%16.1f\n", i + 1, student_total[i],
               (float)student_total[i] / N);
    }

    printf("\nQuiz  Average score  High score  Low score\n");
    for (int i = 0; i < N; i++) {
        printf("%3d%10.1f%13d%13d\n", i + 1, (float)quiz_total[i] / N,
               quiz_max[i], quiz_min[i]);
    }

    return 0;
}
