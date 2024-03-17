
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int arg1 = 5;
    int arg2 = 3;
    
    printf("Result of addition: %d\n", add(arg1, arg2));
    printf("Result of subtraction: %d\n", subtract(arg1, arg2));
    
    return 0;
}
