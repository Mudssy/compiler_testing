
#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    int c = (a * 5) + (b * 4);
    printf("The result of constant folding and propagation is: %d\n", c);
    return 0;
}
