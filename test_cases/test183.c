
#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int z = (x > y) ? x : y;

    printf("The maximum value is: %d\n", z);
    return 0;
}
