
#include <stdio.h>

_Noreturn void print_noreturn() {
    printf("This function does not return.\n");
}

int main() {
    print_noreturn();
    printf("This should not be printed.\n");
    return 0;
}
