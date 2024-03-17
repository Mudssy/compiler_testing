
#include <stdio.h>

extern void print_message();

int main() {
    printf("Calling external function defined in LLVM IR file...\n");
    print_message();
    return 0;
}
