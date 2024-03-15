
#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main() {
    int x = 5;
    int y = 10;
    printf("The maximum between %d and %d is: %d\n", x, y, MAX(x, y));
    return 0;
}
