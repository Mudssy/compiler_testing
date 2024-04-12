
#include <stdio.h>

void func() {
    int x = 10;
    int* ptr = &x;  // Dangling pointer reference here
}

int main() {
    func();
    printf("If you see this, the compiler didn't catch the dangling pointer error\n");
    return 0;
}
