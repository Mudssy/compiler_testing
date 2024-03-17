
#include <stdio.h>

void __attribute__((cold)) function_stub(int x) {
    printf("Function with cold attribute called with value: %d\n", x);
}

int main() {
    function_stub(42);
    return 0;
}
