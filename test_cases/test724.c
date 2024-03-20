
#include <stdio.h>

void __attribute__((cdecl)) cdecl_function(int a, int b) {
    printf("In cdecl function: %d\n", a + b);
}

void __attribute__((stdcall)) stdcall_function(int a, int b) {
    printf("In stdcall function: %d\n", a * b);
}

#ifdef _MSC_VER // MSVC specific
// Microsoft's x64 calling convention for variadic functions is different. It uses fastcall.
void __attribute__((fastcall)) fastcall_function(int a, int b) {
    printf("In fastcall function: %d\n", a - b);
}
#else // Use normal GCC/Clang calling convention for x64 targets.
void fastcall_function(int a, int b) {
    printf("In fastcall function: %d\n", a / b);
}
#endif

int main() {
    cdecl_function(10, 20);
    stdcall_function(30, 40);
    fastcall_function(50, 60);
    return 0;
}
