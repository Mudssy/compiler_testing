
#include <stdio.h>

static inline int add(int a, int b) { return a + b; }

int main() {
    printf("Addition result: %d\n", add(3,4));
    return 0;
}
