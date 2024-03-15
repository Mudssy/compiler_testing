
#include <stdio.h>

int main() {
    int x __attribute__((vector_size(16)));
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    x[3] = 4;
    printf("%d %d %d %d\n", x[0], x[1], x[2], x[3]);
    return 0;
}
