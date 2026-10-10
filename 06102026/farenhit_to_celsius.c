#include <stdio.h>

int main(void)
{
    float farenhit,celsius;
    printf("Enter Farenhit temperature: ");
    scanf("%f", &farenhit);
    celsius = (farenhit - 32.0f) * (5.0f/9.0f);
    printf("Celsius Equivalent: %.1f\n", celsius);
    return 0;
}