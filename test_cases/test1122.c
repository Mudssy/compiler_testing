
#include <stdio.h>

void myFunction() __attribute__((noreturn)) {
    printf("This function does not return! If you see this, the compiler supports attribute specifiers!\n");
}

int main() {
    myFunction();
    return 0;
}
