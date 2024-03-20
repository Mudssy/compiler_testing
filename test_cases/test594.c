
#include <stdio.h>

int main() {
    int x = 0;
start:
    printf("x = %d\n", x);
    if (++x < 5) goto start;
    return 0;
}
