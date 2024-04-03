
#include <stdio.h>

int __llvm_profile_runtime;   // This line is used to ensure that the runtime exists.
                             // It has no effect on normal compilation.

__attribute__((noinline))     // Prevent inlining so the function will not be eliminated by optimizations.
void bar(int x) {
    if (x != 0) {            // This condition is necessary because the value profile instrumentation 
                              // counts the number of times a branch is taken
        printf("Inside Bar\n");
    } else {                  // If a condition has been met, then it would be counted by LLVM's value profiler
        printf("Not Inside Bar\n");
    }
}

__attribute__((noinline))     // Prevent inlining so the function will not be eliminated by optimizations.
void foo() {
    for (int i = 0; i < 10000000; i++)   // This loop is added to ensure that the code inside bar() 
                                       // gets executed multiple times
        bar(i);                         // Calling the function with different values.
}

int main() {
    foo();                              // Calls foo, which calls bar many times, so bar's condition will be taken in both cases.
    __llvm_profile_write_file();       // This line writes a file containing the profile data. 
                                      // You can then use llvm-profdata to read this data.
}
