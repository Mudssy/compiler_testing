
#include <stdio.h>
#include <stdlib.h>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int a = 0;
    for (int i = 0; i < 1000000000; ++i) {
        a += add(i % 2, i / 2);
    }
    printf("%d\n", a);
    return 0;
}
