
#include <stdio.h>

int main() {
    int result;
    
    __asm__(
        "movl $5, %%eax\n"  // load immediate value 5 into eax
        : "=a"(result)     // output operand to return the function's result
    );
    
    printf("Result: %d\n", result);     // This should print Result: 5

    return 0;
}
