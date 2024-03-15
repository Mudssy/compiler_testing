
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wunused-variable"
    int ______a____________ = a + b;
    int _________b_ = a - b;
    int __a_b__ = a * b;
    #pragma clang diagnostic pop

    printf("Obfuscated output: %d, %d, %d\n", ______a____________, _________b_, __a_b__);
    return 0;
}
