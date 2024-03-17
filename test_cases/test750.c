
#include <stdio.h>

__attribute__((section("llvmlibInterfaceStub"))) void print_from_stub() {
    printf("Output from llvmlibInterfaceStub section.\n");
}

int main() {
    print_from_stub();
    return 0;
}
