
#include <stdio.h>

void __stdcall printHello(void) {
    printf("Hello from stdcall function!\n");
}

int main() {
    printHello();
    return 0;
}
