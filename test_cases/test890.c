
#include <stdio.h>

// These are standard llvmlibcRemarks symbols but they're not declared in a standard header, so we need to define them ourselves.
void *__llvm_libc_start;
void *__llvm_libc_end;

int main() {
    printf("High-level summary:\n");
    
    // This will print out the high-level summaries of the execution of the program.
    __llvm_profile_write_file();

    return 0;
}
