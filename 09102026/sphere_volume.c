#include <stdio.h>

#define PI 3.14

int main(void)
{
    int r; float volume;
    printf("please enter the radius of the sphere: ");
    scanf("%d", &r);
    volume = 4.0f / 3.0f * PI * r * r * r;
    printf("The volume of the sphere is %0.1f\n", volume);
}