#include <stdio.h>

int main(void)
{
    float bill, taxxed_amt;
    printf("Please enter your bill amount: ");
    scanf("%f", &bill);
    taxxed_amt = 1.05 * bill;
    printf("Your total bill is $%.1f\n", taxxed_amt);    
}