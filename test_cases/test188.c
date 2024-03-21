
#include <stdio.h>

constexpr int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    const int a = factorial(5);

    printf("Factorial of 5 is %d\n", a);

    return 0;
}
