
#include <stdio.h>

void func1(void) { printf("Function 1\n"); }
void func2(void) { printf("Function 2\n"); }
void func3(void) { printf("Function 3\n"); }

int main() {
    int value = 0; // Change this to the test case you want to use
    
    if (value == 1) {
        func1();
    } else if (value == 2) {
        func2();
    } else if (value == 3) {
        func3();
    } else {
        printf("Invalid value\n");
    }
    
    return 0;
}
