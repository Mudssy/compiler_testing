
#include <stdio.h>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 7);
    printf("The sum of 5 and 7 is: %d\n", result);
    return 0;
}
