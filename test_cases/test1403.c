
#include <stdio.h>

// This test case will be executed
void executedTest() {
    __llvmlibProfileData(1); // Mark this function as being 'executed' for coverage data
    printf("This function is executed\n"); 
}

// This test case will not be executed because there is no call to the llvmlibProfileData function.
void nonExecutedTest() {
    printf("This function is not executed\n");
}

int main() {
    executedTest(); // Call the 'executed' function
    return 0; // Ensure that all test cases eventually return to avoid infinite running time.
}
