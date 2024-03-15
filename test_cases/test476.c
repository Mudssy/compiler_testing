
#include <stdio.h>

void __attribute__((fastcall)) print_fastcall(int arg1) {
    printf("Fastcall function called with argument: %d\n", arg1);
}

int main() {
    print_fastcall(42);
    return 0;
}
