
#include <stdio.h>

_Noreturn void print_noreturn(const char *message) {
    printf("%s\n", message);
    exit(0);
}

int main() {
    print_noreturn("This is a test for the _Noreturn feature.");
    return 0;
}
