
#include <stdio.h>

constexpr int add(int a, int b) {
    return a + b;
}

int main() {
    constexpr int result = add(5, 3);
    printf("The sum of 5 and 3 is: %d\n", result);
    return 0;
}
