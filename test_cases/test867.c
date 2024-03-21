
#include <stdio.h>
#include <assert.h>

int main(void) {
    // Checking different severity levels (0, 1, 2, 3). Adjust according to your feature check.
    for (int i = 0; i < 4; ++i) {
        char buffer[50];
        sprintf(buffer, "Remark at level %d", i);
        __builtin_debugtrap(); // Using debug trap function to trigger remark. Replace this with your feature specific code.
    }
    return 0; // Make sure it returns and does not run forever.
}
