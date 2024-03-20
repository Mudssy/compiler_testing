
#include <stdio.h>

void __attribute__((no_icf)) foo() {
    printf("Function foo called\n");
}

int main() {
    void (*funcPtr)() = (void(*)())foo;
    funcPtr();
    return 0;
}
