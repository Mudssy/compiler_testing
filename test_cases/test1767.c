
#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf env;

void test(int value) {
    longjmp(env, value); // This will set the return code to `value` and then 'long jump' back to where we set up our jmp_buf.
}

int main() {
    volatile int result = setjmp(env); // Setup our jmp_buf, saving its state in case of long jump. The volatile keyword is used here because the compiler cannot assume that env will not change within this function.
    
    if (result == 0) {
        printf("In main\n"); // This should print out normally
        test(1); // Call our other function to 'long jump' back to where we set up our jmp_buf, with the return code being 1
    } else {
        printf("Long jumped back into main with result = %d\n", result);
    }
    
    return 0; // This is never hit since we longjumped out of here
}
