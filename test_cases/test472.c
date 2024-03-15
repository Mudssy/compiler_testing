
#include <stdio.h>

int main() {
    int a = 10;
    constexpr int b = __builtin_constant_p(a) ? a : -1;
    
    printf("Value of b: %d\n", b);
    
    return 0;
}
