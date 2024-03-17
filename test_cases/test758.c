
#include <stdio.h>

void __attribute__((no_instrument_function)) noInstrumentFunction() {
    printf("This function should not be instrumented.\n");
}

int main() {
    noInstrumentFunction();
    return 0;
}
