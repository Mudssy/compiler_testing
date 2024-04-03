
#include <stdio.h>
#include <stdlib.h>

void __llvm_profile_runtime; // Declare the function prototype, to prevent undefined symbol error.

int main() {
    printf("Hello, world!\n");
    __llvm_profile_write_file(); // Write profile data to a file named default.profraw by default.
    
    return 0; // Return from the program successfully.
}
