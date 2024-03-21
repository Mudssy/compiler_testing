
#include <stdio.h>

void __attribute__((constructor)) initLibrary(void) {
    printf("Hello from library constructor!\n");
}

int main() {
    return 0;
}
