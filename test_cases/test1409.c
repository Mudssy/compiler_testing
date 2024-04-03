
#include <stdio.h>

void func1(void) { printf("Function 1\n"); }
void func2(void) { printf("Function 2\n"); }
void func3(void) { printf("Function 3\n"); }

int main() {
    int value = 0; // Change this to test different values
    
    if (__builtin_expect(value == 0, 1)) {
        __builtin_branch_weight(1);
        func1();
    } else if (__builtin_expect(value == 1, 2)) {
        __builtin_branch_weight(2);
        func2();
    } else if (__builtin_expect(value == 2, 3)) {
        __builtin_branch_weight(3);
        func3();
    } else {
        printf("Invalid value\n");
    }
    
    return 0;
}
