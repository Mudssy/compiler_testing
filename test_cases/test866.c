
#include <stdio.h>
#include "llvm-c/Remarks.h"
#include "llvm-c/Core.h"

// Callback function to process remarks
void print_remark(const char *pass, const char *msg, void *userdata) {
    printf("Pass: %s\nMessage: %s\n", pass, msg);
}

int main() {
    // Initialize the remark registry. This function needs to be called only once.
    LLVMInitRemarkRegistry();
    
    // Setup a callback for processing remarks
    LLVMSetRemarkCallback(print_remark, NULL);
    
    // The code here should generate some remarks to process by your print_remark() function...
    // For the sake of this example, let's just return 0.
    return 0;
}
