
#include <stdio.h>

int main() {
    int x = 10;
    int y = 5;
    const int z = (x + y) * 2;

    printf("The value of constant expression z is: %d\n", z);
    return 0;
}
