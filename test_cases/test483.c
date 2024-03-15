
#include <stdio.h>

__attribute__((noinline)) int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(2, 3);
    printf("Result: %d\n", result);
    return 0;
}
