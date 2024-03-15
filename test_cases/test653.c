
#include <stdio.h>

int main() {
    _Alignas(16) int aligned_var;
    printf("Address of aligned_var: %p\n", (void *)&aligned_var);

    return 0;
}
