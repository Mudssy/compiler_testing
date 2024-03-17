
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    // LLVM Instruction Scheduling feature test case
    printf("Before optimization: %d + %d = %d\n", a, b, a + b);
    return 0;
}
