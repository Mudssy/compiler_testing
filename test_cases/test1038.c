
#include <stdio.h>

inline int add(int a, int b) { return a + b; }

int main() {
    int result = add(3, 5);
    printf("Result: %d\n", result);
    return 0;
}
