#include <stdio.h>

int main(void)
{
    float loan_amt, intrest, monthly_pay;
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amt);
    printf("Enter intrest rate: ");
    scanf("%f", &intrest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_pay);
    
    float balance_after_first = loan_amt * (1.0f + intrest / 1200.0f) - monthly_pay;
    float balance_after_second = balance_after_first * (1.0f + intrest /1200.0f) - monthly_pay;
    float balance_after_third = balance_after_second * (1.0f + intrest /1200.0f) - monthly_pay;

    printf("Balance remaining after first payment: $%.2f\nBalance remaining after second payment: $%.2f\nBalance remaining after third payment: $%.2f\n", balance_after_first, balance_after_second, balance_after_third);
}