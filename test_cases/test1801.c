
#include <stdio.h>

void foo(int x) {
    printf("%d\n", x);
}

int main() {
    foo("Hello, World!"); // Misuse API here
    return 0;
}
