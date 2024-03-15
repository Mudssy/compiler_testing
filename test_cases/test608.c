
#include <stdio.h>

typedef int (*func_ptr)(int);

int func(int x) {
    return x * 2;
}

int main() {
    func_ptr fptr = &func;
    printf("Result: %d\n", fptr(5));
    return 0;
}
