#include <stdio.h>

void print_numbers_reverse(int start, int end) {
  do{
    print("%d\n", start);
    start++;
  } while(start < end);
}
#include <stdio.h>

int main() {
    int i = 100;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);
    return 0;
}
// Prints:
// i = 100