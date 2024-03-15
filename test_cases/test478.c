
#include <stdio.h>

// Declare a function with thiscall calling convention (GCC extension)
int __attribute__((thiscall)) thiscall_function(int a, int b) {
    return a + b;
}

int main() {
    int result = thiscall_function(3, 4);
    printf("Result: %d\n", result);
    return 0;
}
