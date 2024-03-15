
#include <stdio.h>

void func(int x) {
    printf("In func: %d\n", x * 2);
}

int main() {
    void (*fptr)(int);
    fptr = &func;
    (*fptr)(10);
    return 0;
}
