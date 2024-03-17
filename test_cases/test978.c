
#include <stdio.h>

int loop_invariant(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i * 2;
    }
    return sum;
}

int main() {
    int result = loop_invariant(10);
    printf("Result: %d\n", result);
    return 0;
}
