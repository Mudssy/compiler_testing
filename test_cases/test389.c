
#include <stdio.h>

#define PRINT_MESSAGE(x) printf("Message: %s\n", x);

int main() {
    const char* message = "Testing Macros Feature";
    PRINT_MESSAGE(message)
    return 0;
}
