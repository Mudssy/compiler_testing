
#include <stdio.h>

// Ensure this function is compatible with C++ code.
extern "C" void call_cpp(void);

int main() {
    // Call a C++ function from C.
    call_cpp();

    return 0;
}
