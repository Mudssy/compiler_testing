
#include <stdio.h>

// auto
void func(int x) {
    int autoVar = 5;
    printf("auto variable: %d\n", autoVar);
}

// register
void registerFunc() {
    register int regVar = 10;
    printf("register variable: %d\n", regVar);
}

// static
void anotherFunc() {
    static int staticVar = 0;
    printf("static variable: %d\n", staticVar++);
}

int main() {
    func(1);
    registerFunc();
    anotherFunc();
    return 0;
}
