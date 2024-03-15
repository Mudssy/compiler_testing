
#include <stdio.h>
#include <stdlib.h>

[[clang::cleanup(printf("Cleaning up...\n"))]] int main() {
    printf("This is a test.\n");
    return 0;
}
