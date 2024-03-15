
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wunused-variable"
    int unused_var = 0; // This variable will be flagged as unused without the pragma
    #pragma clang diagnostic pop

    printf("The code compiled successfully with the diagnostic pragmas feature.\n");
    return 0;
}
