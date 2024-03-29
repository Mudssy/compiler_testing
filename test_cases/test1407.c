
#include <stdio.h>

int main() {
    printf("Testing llvm Profile Data feature\n");
    
    // Initialize the profiling information
    __llvm_profile_init();

    int i;

    for(i=0; i<10; i++) {
        // Add branch weight metadata based on profile data
        if(__builtin_expect((i % 2 == 0), 1)) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    }

    return 0;
}
