
#include <stdio.h>

#define MULTIPLY(a, b) a*b

int main() {
    int x = 10;
    int y = MULTIPLY(x+5, x);  // This should be broken into x+5*x by clang-format
    
    printf("Result: %d\n", y);
    
    return 0;
}
