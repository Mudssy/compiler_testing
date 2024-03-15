
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int input = 10;
    printf("The %dth number in the Fibonacci sequence is: %d\n", input, fibonacci(input));
    return 0;
}
