#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 6; i++){
        for (int j = 0; j < 8; j++){
            if(i + j == 5 || j - i == 5){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}