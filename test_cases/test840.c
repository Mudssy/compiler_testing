
#include <stdio.h>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    printf("The result of adding 3 and 4 is: %d\n", result);
    return 0;
}
