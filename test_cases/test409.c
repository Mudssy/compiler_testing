
#include <stdio.h>

typedef int (*functionPointerType)(int, int);

int add(int a, int b) {
    return a + b;
}

int main() {
    functionPointerType funcPtr = &add;
    int x = 5;
    int y = 10;
    
    printf("Result of function call through pointer: %d\n", funcPtr(x, y));
    
    return 0;
}
