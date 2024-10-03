#include <stdio.h>

int main() {
    float attendance, assignments, exam;
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    printf("Enter assignment score: ");
    scanf("%f", &assignments);
    printf("Enter exam score: ");
    scanf("%f", &exam);

    if (attendance >= 75) {
        if (assignments >= 40) {
            if (exam >= 50) {
                printf("The student passes with a final grade.\n");
            } else {
                printf("The student fails due to low exam score.\n");
            }
        } else {
            printf("The student fails due to low assignment score.\n");
        }
    } else {
        printf("The student fails due to low attendance.\n");
    }

    return 0;
}
