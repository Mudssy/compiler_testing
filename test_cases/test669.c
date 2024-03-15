
#include <stdio.h>

int main() {
    int a = 5;
    printf("The value of a before rewriting: %d\n", a);
    #pragma clang rewrite_begin("test")
    a *= 2;
    #pragma clang rewrite_end
    printf("The value of a after rewriting: %d\n", a);
    return 0;
}
