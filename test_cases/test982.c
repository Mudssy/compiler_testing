
#include <stdio.h>

int factorial(int n, int acc) {
    if (n == 0) return acc;
    else return factorial(n - 1, n * acc);
}

int main() {
    printf("Factorial of 5: %d\n", factorial(5, 1));
    return 0;
}
