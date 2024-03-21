
#include <stdio.h>

int main() {
    // If the compiler has support for 'llvmlibRemarks', print a message 
    #if __has_feature(llvmlibRemarks)
        printf("The compiler supports llvmlibRemarks.\n");
    // Else, print a different message
    #else
        printf("The compiler does not support llvmlibRemarks.\n");
    #endif
    
    return 0;
}
