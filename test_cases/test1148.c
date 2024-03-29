
#include <stdio.h>

__attribute__((cdecl)) void test_cdecl(void) {
    printf("Inside test_cdecl\n");
}

__attribute__((stdcall)) void test_stdcall(void) {
    printf("Inside test_stdcall\n");
}

int main() {
    test_cdecl();
    test_stdcall();
    return 0;
}
