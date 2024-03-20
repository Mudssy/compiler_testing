
#include <stdio.h>

void print_if_supported(void) {
    const char* message = __builtin_choose_expr(__builtin_types_compatible_p(int, int), "Supported", "Not supported");
    printf("%s\n", message);
}

int main() {
    print_if_supported();
    return 0; // To make sure the program doesn't run forever.
}
