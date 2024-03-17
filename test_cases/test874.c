
#include <stdio.h>

int main() {
    #pragma optimization_id("llvmlibRemarks")
    int x = 5;
    printf("The value of x is: %d\n", x);
    return 0;
}
