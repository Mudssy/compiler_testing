
#include <stdio.h>

void __attribute__((noclone)) noclone_function(int x) {
    printf("Function with __attribute__((noclone)) called with argument: %d\n", x);
}

int main() {
    noclone_function(42);
    return 0;
}
