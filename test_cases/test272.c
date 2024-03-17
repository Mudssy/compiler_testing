
#include <stdio.h>

#define PRINT_MSG(msg) printf("Message: %s\n", msg)

int main() {
    char* msg = "Hello World";

    // Define the macro
    #ifdef PRINT_MSG
        PRINT_MSG(msg);
    #endif

    // Undefine the macro
    #undef PRINT_MSG

    // Attempt to use the macro after it's undefined
    #ifdef PRINT_MSG
        PRINT_MSG(msg);  // This line will not compile if the macro is undefined
    #else
        printf("Macro PRINT_MSG is undefined\n");
    #endif

    return 0;
}
