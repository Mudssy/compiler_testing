
#include <stdio.h>
#include "external_symbols_header.h"

int main() {
    int result = external_function();
    printf("The result of calling the external function is: %d\n", result);
    return 0;
}
