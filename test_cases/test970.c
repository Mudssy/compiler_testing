
#include <stdio.h>

int main(void) {
    int x = 1 + 2; // This should be optimized by LLVM to just print "0"
    printf("%d\n", x);
    return 0;
}
