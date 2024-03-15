
#include <stdio.h>

void func(int a = 10, int b = 20) {
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}

int main() {
    func();
    return 0;
}
