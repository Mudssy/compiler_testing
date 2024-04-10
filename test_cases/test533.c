
#include <stdio.h>
#include <assert.h>
int main() {
    printf("Executing assert().\n");
    
    // 'assert' in C is defined as a macro, it evaluates its argument. 
    // If the expression results to false (0), it stops execution of the program and prints error message on stderr.
    // It won't give a chance for debugger to stop at this line because it's not designed to trap in C, rather it's meant for testing assertions in your code. 
    
    assert(0); 
    
    printf("This won't get printed since the execution is stopped due to the 'assert()'.\n");
    return 0;
}
