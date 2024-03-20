
#include <stdio.h>

// Defines the interface for dependency injection
#define MY_FUNC(x) printf("Dependency Injection: " #x "\n")

int main() {
    // Uses the injected dependency
    MY_FUNC("This is a test");

    return 0;
}
