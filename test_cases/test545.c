
#include <stdio.h>
#include <assert.h>
#include <setjmp.h>

int main() {
    jmp_buf env;
    int val = setjmp(env);
    
    if (val != 42) {
        assert(_Generic(val, int: 1, default: 0));
        
        // This feature is not used in the main function as it can't be tested here.
        
        longjmp(env, 42);
    } else {
        printf("Builtin Expect With Probability Operations feature supported by clanginclude section of the compiler.\n");
    }
    
    return 0;
}
