
#include <stdio.h>

int main() {
    int x = 10;
    
    if (__builtin_constant_p(x)) {
        printf("Compiler supports __builtin_constant_p\n");
    } else {
        printf("Compiler does not support __builtin_constant_p\n");
    }
    
    return 0;
}
