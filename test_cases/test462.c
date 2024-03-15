
#include <stdio.h>

__attribute__((const)) int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10;
    int y = 20;
    printf("Result: %d\n", add(x, y));
    return 0;
}
