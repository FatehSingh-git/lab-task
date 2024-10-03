#include <stdio.h>

int main() {
    int age;
    float income, creditScore;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter income: ");
    scanf("%f", &income);
    printf("Enter credit score: ");
    scanf("%f", &creditScore);

    // Loan eligibility conditions: age >= 18, income >= 30000, credit score >= 650
    if (age >= 18 && income >= 30000 && creditScore >= 650) {
        printf("The person is eligible for a loan.\n");
    } else {
        printf("The person is not eligible for a loan.\n");
    }

    return 0;
}
