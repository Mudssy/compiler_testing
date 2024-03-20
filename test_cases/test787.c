
#include <stdio.h>

int test(int a, int b) {
    return a == b;
}

void print_result(const char* compilerName, int result) {
    printf("Using %s:\n", compilerName);
    
    if (result) {
        printf("\tRelational Operators feature is supported.\n");
    } else {
        printf("\tRelational Operators feature is not supported.\n");
    }
}

int main() {
    int result = test(42, 21); // Test with different values if needed
    
    print_result("LLVM", result);

    return 0;
}
