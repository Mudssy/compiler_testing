
#include <stdio.h>

void __attribute__((no_icf)) function_stub() {
    printf("Function stub with __attribute__((no_icf))\n");
}

int main() {
    function_stub();
    return 0;
}
