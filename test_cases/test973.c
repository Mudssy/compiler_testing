
#include <stdio.h>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    printf("Result: %d\n", add(2, 3));
    return 0;
}
