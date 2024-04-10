
#include <stdio.h>
#include <stdlib.h> // Include stdlib for getenv function

int main(void) {
    const char* compilerName = getenv("CC");
    
    if (compilerName == NULL) {
        printf("Compiler name not available.\n");
        return 1; // Return an error code to signal test failure
     } else {
        printf("The compiler name is: %s\n", compilerName);
        return 0; // Return success to signal that the test passed
     }
}
