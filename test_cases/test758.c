
#include <stdio.h>

void __attribute__((no_instrument_function)) stubFunction() {
    printf("This is a stub function that should never be instrumented.\n");
}

int main() {
    stubFunction();
    return 0;
}
