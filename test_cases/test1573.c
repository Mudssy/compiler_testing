
#include <stdio.h>

int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

void print_fibonacci() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", fib(i));
    }
}

int main() {
    print_fibonacci();
    return 0;
}
