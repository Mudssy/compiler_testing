
// main.c
#include <stdio.h>

module M {
    export int foo() {
        return 123;
    }
}

int main() {
    printf("%d\n", M_foo());
    return 0;
}
