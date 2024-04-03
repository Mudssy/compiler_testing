
#include <stdio.h>
#include <profile_data.h>

int main(void) {
    __llvm_profile_init_counters();
    
    for (int i = 0; i < 100; ++i) {
        printf("Hello World\n");
    }
    
    __llvm_profile_write();
    
    return 0;
}
