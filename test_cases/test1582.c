
#include <stdio.h>

void recursive_func(int x) {
    if (x == 0) return;
    printf("%d\n", x);
    recursive_func(--x); // Stack frame should show this as separate function call
}

int main() {
    recursive_func(5); // Should print 1 to 5 on different lines
    return 0;
}
