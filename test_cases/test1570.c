
#include <stdio.h>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 7); // This will be inlined by the compiler
    printf("%d\n", result);
    return 0;
}
