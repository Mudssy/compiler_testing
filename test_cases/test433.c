
#include <stdio.h>

extern void clang_function(void);

int main() {
    printf("Before calling external function.\n");
    clang_function();
    printf("After calling external function.\n");
    return 0;
}
