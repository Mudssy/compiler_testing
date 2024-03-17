
#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = 2;
    int d = (a + b) * c - a % b;
    printf("%d\n", d);
    return 0;
}
