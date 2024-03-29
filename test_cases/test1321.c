
#include <stdio.h>

int main(void) {
    const char* compilerName = __carg[0];

    if (compilerName == NULL) {
        printf("Compiler name not available.\n");
        return 1; // Return an error code to signal test failure
    } else {
        printf("The compiler name is: %s\n", compilerName);
        return 0; // Return success to signal that the test passed
    }
}
