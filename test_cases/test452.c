
#include <stdio.h>

void __attribute__((constructor)) setup() {
    printf("This is the constructor\n");
}

void __attribute__((destructor)) teardown() {
    printf("This is the destructor\n");
}

int main() {
    printf("This is the main function\n");
    return 0;
}
