
#include <stdio.h>

__declspec(dllimport) void imported_func(); // Assume this exists in some DLL

int main() {
    printf("Calling an imported function.\n");
    imported_func(); // Call a function from another DLL/shared library.
    
    return 0; // Ensure that the program always returns.
}
