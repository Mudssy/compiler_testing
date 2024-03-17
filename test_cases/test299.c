
#include <stdio.h>

void __attribute__((constructor)) initLibrary(void) {
    printf("Library Initialized!\n");
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
