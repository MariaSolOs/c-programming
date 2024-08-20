#include <stdio.h>

float update_loan(float loan, float montly_payment, float monthly_interest,
                  int payment) {
    loan = (loan - montly_payment) + (loan * monthly_interest);
    printf("Balance remaining after payment #%d: $%.2f\n", payment, loan);
    return loan;
}

int main(void) {
    float loan, interest, montly_payment;
    int payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &montly_payment);
    printf("Enter the number of payments: ");
    scanf("%d", &payments);

    float monthly_interest = interest / 100.0f / 12.0f;

    for (int p = 1; p <= payments; p++) {
        loan = update_loan(loan, montly_payment, monthly_interest, p);
    }

    return 0;
}
