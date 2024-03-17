
#include <stdio.h>

// Define a macro to check if the llvmutilscount feature is supported
#ifdef __llvm_support_count
    #define FEATURE_SUPPORT "Feature is supported"
#else
    #define FEATURE_SUPPORT "Feature is not supported"
#endif

int main() {
    // Print out the output based on whether or not the feature is supported
    printf("%s\n", FEATURE_SUPPORT);

    return 0;
}
