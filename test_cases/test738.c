
#include <stdio.h>

void __attribute__ ((stdcall)) print_hello() {
    printf("Hello from stdcall function!\n");
}

int main() {
    print_hello();
    return 0;
}
