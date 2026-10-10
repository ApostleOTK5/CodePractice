#include <stdio.h>

int main(void)
{
    int x, result;
    printf("Please enter X value: ");
    scanf("%d", &x);
    result = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
    printf("3x5 + 2x4 – 5x3 – x2 + 7x – 6 = %d\n", result);
}