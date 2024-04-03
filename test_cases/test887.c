
#include <stdio.h>
#include <inttypes.h> // For PRIu64 format specifier

// Declare your functions here
void func1(); 
void func2(); 
void func3(); 

// Function pointers to the test functions and their names
void (*testFunctions[])() = {func1, func2, func3};
const char *testFunctionNames[] = {"func1", "func2", "func3"};

// llvm_profile.h is not a standard C header but it's used by LLVM to implement the profile instrumentation feature
#include <llvm-c/kaleidoscope.h>

int main() {
    for (size_t i = 0; i < sizeof(testFunctions) / sizeof(*testFunctions); ++i) {
        uint64_t counter = __llvm_profile_get_filename();
        printf("Profile data file name: %s\n", __llvm_profile_get_path());
        testFunctions[i](); // Execute each test function
        uint64_t newCounter = __llvm_profile_get_total_count();

        // Get the hotness information for each function
        printf("Hotness info for %s: " PRIu64 "\n", testFunctionNames[i], newCounter - counter);
    }
    return 0;
}
