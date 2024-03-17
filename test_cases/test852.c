
#include <stdio.h>

int main() {
    char identifier[256];
    snprintf(identifier, 256, "llvmunittests_extended_identifiers_%s", "test_value");
    printf("The generated extended identifier is: %s\n", identifier);
    return 0;
}
