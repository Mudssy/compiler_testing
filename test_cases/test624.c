
#include <stdio.h>

struct llvm_build {
    int a;
    float b;
    char c[20];
};

int main() {
    struct llvm_build obj = {10, 3.14f, "llvm-build"};

    printf("Struct values: %d, %.2f, %s\n", obj.a, obj.b, obj.c);

    return 0;
}
