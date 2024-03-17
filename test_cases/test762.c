
#include <stdio.h>

__attribute__((flatten)) void function_stub(int x) {
    printf("Function Stub called with argument: %d\n", x);
}

int main() {
    function_stub(42);
    return 0;
}
