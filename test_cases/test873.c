
#include <stdio.h>

int __llvm_libc_warning(const char *message, const char *file, unsigned line);

int main() {
    int x = 10; // Change this value to test different cases
    switch (x) {
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            __llvm_libc_warning("This is a warning", __FILE__, __LINE__);
            break;
        default:
            printf("Default case\n");
    }
    return 0; // This ensures the program returns and does not run forever
}
