
#include <stdio.h>

typedef int (*func_ptr)(int);

static int add(int a, int b) {
    return a + b;
}

int main() {
    func_ptr addPtr = (func_ptr)&add;
    int result = addPtr(3, 5);
    printf("Result: %d\n", result);
    return 0;
}
