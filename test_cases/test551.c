
#include <stdio.h>

int main() {
    int i;
    
    #pragma clang loop unroll(full)
    for (i = 0; i < 1000; ++i) {
        printf("Iteration %d\n", i);
    }
    
    return 0;
}
