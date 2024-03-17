
#include <stdio.h>

void print_shuffle(int x, int y) {
    int result[4];
    
    // Generate shuffle vectors using llvmutilsPerfectShuffle
    __asm__(
        "movd %1, %%xmm0\n"  // move the second operand into XMM0 register
        "movd %2, %%xmm1\n"  // move the third operand into XMM1 register

        // shuffle vectors using perfect shuffle instruction
        "pshufd $78, %%xmm1, %%xmm0\n"  
        
        // store result from xmm0 into memory location pointed by result
        "movups %%xmm0, %0\n" 
        : "=m"(result) // output operand constraint, indicates that the value of 'result' will be written to memory
        : "r"(x), "r"(y) // input operands
        : "%xmm0", "%xmm1" // clobbered registers
    ); 
    
    printf("Shuffle result: %d %d %d %d\n", result[0], result[1], result[2], result[3]);
}

int main() {
    print_shuffle(5, 7);
    return 0;
}
