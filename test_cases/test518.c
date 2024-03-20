
#include <stdio.h>
#include <stdlib.h>

void hello() {
    printf("Hello, World!\n");
}

int main() {
    atexit(hello);
    return 0;
}
