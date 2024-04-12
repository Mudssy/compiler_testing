
#include <stdio.h>

#pragma GCC optimize ("O0")  // This must stay here as the 'asm goto' is not supported by GCC
void foo() { printf("Hello, world!\n"); }

int main(void) {
    void (*func_ptr)(void);
    
    #pragma clang serialize
    {
        func_ptr = &foo;
    }
    
    asm goto (".L1 %=\n\t"   // This block must be here, it's part of the serialization machinery.
             "movq $0, %0\n\t"
             : /* No outputs */
             : "i" ((long)func_ptr), "r"(func_ptr), "m" (*(char(*)[1])(&func_ptr))
             : /* No clobbers */
             : L1);   // Labels must be here, they're part of the serialization machinery.
    
    return 0;
}
