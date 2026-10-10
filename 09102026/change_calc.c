#include <stdio.h>

int main(void)
{
    int dolla;
    printf("Please enter dollar amount: ");
    scanf("%d", &dolla);
    int bill_20 = dolla / 20;
    int rem_20 = dolla % 20;

    int bill_10 = rem_20 / 10;
    int rem_10 = rem_20 % 10;
    
    int bill_5 = rem_10 / 5;
    int rem_5 = rem_10 % 5;

    int bill_1 = rem_5;

    printf("$20 bills : %d\n$10 bills : %d\n$5 bills : %d\n$1 bills : %d\n", bill_20, bill_10, bill_5, bill_1);
}