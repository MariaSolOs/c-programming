#include <stdio.h>

float update_loan(float loan, float montly_payment, float monthly_interest,
                  char *month) {
    loan = (loan - montly_payment) + (loan * monthly_interest);
    printf("Balance remaining after %s payment: $%.2f\n", month, loan);
    return loan;
}

int main(void) {
    float loan, interest, montly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &montly_payment);

    float monthly_interest = interest / 100.0f / 12.0f;

    loan = update_loan(loan, montly_payment, monthly_interest, "first");
    loan = update_loan(loan, montly_payment, monthly_interest, "second");
    loan = update_loan(loan, montly_payment, monthly_interest, "third");

    return 0;
}
