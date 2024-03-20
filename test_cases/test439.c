
#include <stdio.h>

__attribute__((noinline)) void myFunction() {
    printf("This function is not inlined by the compiler.\n");
}

int main(void) {
    // Test if 'myFunction' is not inlined by the compiler
    for (int i = 0; i < 10; ++i) {
        myFunction();
    }

    return 0;
}
