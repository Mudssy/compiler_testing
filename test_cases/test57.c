
#include <stdio.h>

inline int add(int x, int y) {
    return x + y;
}

int main() {
    int result = add(3, 4);
    printf("The result is %d\n", result);
    return 0;
}
