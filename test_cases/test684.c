
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
    int unused_var __attribute__((unused)) = 3;
#pragma clang diagnostic pop

    printf("a: %d, b: %d\n", a, b);
    return 0;
}
