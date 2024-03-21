
#include <stdio.h>
#include <string.h>

extern void *llvmlibc_test(void);

int main(void) {
    const char *remarks;
    
    // Call a function from libremar
    llvmlibc_test();
    
    remarks = __llvm_libc_getRemarks();
    
    if (remarks == NULL) {
        printf("No remarks provided.\n");
    } else {
        size_t len = strlen(remarks);
        
        // Print out each character in the remarks string.
        for (size_t i = 0; i < len; ++i) {
            putchar(remarks[i]);
        }
        
        putchar('\n');
    }
    
    return 0;
}
