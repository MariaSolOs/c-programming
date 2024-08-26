#include <ctype.h>
#include <stdio.h>

float compute_GPA(char grades[], int n) {
    float gpa = 0.0f;

    for (int i = 0; i < n; i++) {
        switch (toupper(grades[i])) {
            case 'A':
                gpa += 4.0f;
                break;
            case 'B':
                gpa += 3.0f;
                break;
            case 'C':
                gpa += 2.0f;
                break;
            case 'D':
                gpa += 1.0f;
                break;
        }
    }

    return gpa / n;
}

int main(void) {
    printf("GPA: %.1f", compute_GPA((char[]){'A', 'B', 'A', 'C', 'B'}, 5));
    return 0;
}
