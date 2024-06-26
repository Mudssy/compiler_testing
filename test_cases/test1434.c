
#include <stdio.h>

void __llvmlibProfileData(const char *);

__attribute__((noinline)) void foo() {
    asm volatile("" ::: "memory");
}

int main() {
     // Start profiling
    __llvmlibProfileData("start");

    for (long long int i = 0; i < 10000000LL; ++i) {
        foo();
    }

    // End profiling and print results to stdout
    __llvmlibProfileData("stop");
    
    return 0;
}
