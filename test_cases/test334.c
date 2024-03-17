
#include <stdio.h>

void someFunction() __attribute__((annotate("this is a custom note")));

int main() {
    printf("This is a test program for clang libAPI Notes.\n");
    return 0;
}
