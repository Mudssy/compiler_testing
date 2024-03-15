
#include <stdio.h>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(10, 20);
    printf("The sum of 10 and 20 using inline function is: %d\n", result);
    return 0;
}
