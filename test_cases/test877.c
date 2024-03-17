
#include <stdio.h>

int main() {
    printf("Testing llvmlibRemarks feature:\n");
    
    // This code will generate a remark from the LLVM compiler
    int a = 5;
    if (a > 10) {
        printf("This condition will never be true.\n");
    } else {
        printf("This condition might be true.\n");
    }
    
    return 0;
}
