
#include <stdio.h>

__attribute__((noinline))
void my_function() {
    for (int i = 0; i < 10000000; ++i) {}
}

int main() {
    // Start profiling
    __llvm_profile_write_file();

    printf("Before function call\n");
    my_function();
    printf("After function call\n");

    // Stop profiling and write results to file
    __llvm_profile_reset_counters();
    
    return 0;
}
