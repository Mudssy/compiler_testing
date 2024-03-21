
#include <stdio.h>

void uncalledFunction() {
    printf("This function will not be called but the compiler should optimize it away.\n");
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
