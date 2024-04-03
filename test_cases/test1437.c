
#include <stdio.h>

int main() {
    int i, n = 10;
    
    printf("Profiling llvm loop iterations:\n");
    
    for (i=0; i<n; ++i) {
        printf("%d\n", i);
        ++i; // To simulate a non-linear execution path of the loop.
    }
    
    return 0;
}
