
#include <stdio.h>

inline int add(int a, int b) {  // Inline function
    return a + b;
}

int main() {
    printf("Sum: %d\n", add(5, 10));
    return 0;
}
