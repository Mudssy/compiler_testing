
#include <stdio.h>

int main() {
    char *output;  // Variable to store output string
    
    // Check if int is 4 bytes long (which it should be)
    _Static_assert(sizeof(int) == 4, "_Static_assert failed");
    output = "Size of int is 4 bytes";

    printf("%s\n", output);

    return 0;
}
