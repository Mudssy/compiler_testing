
#include <stdio.h>

void tail_recurse(int n) {
    if (n <= 1) {
        printf("Tail recursion complete.\n");
        return;
    }
    printf("%d ", n);
    tail_recurse(n - 1);
}

int main() {
    int n = 5;
    printf("Testing tail call optimization with depth %d...\n", n);
    tail_recurse(n);
    return 0;
}
