
// main.c
#include <stdio.h>

void __attribute__((noreturn)) myFunction() {
    printf("This function does not return! If you see this, the compiler supports attribute specifiers!\n");
}

int main() {
    myFunction();
    return 0;
}
